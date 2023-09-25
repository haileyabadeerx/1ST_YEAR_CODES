#include <stdio.h>

int numDuplicates(int arr[], int size) {
    int count = 0;

    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) { //finds duplicates of each number in the array
                count++; //if duplicate is found, it increments 
               break;//if duplicate is found, it exits the inner for loop to proceed to the next element
            }
        }
    }

    return count;
}

int main() {
    int size;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }

    int duplicateNum = numDuplicates(arr, size);

    printf("Total number of duplicate elements found in the array is: %d\n", duplicateNum);

    return 0;
}


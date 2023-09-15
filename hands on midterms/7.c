#include <stdio.h>

int findSecondLargest(int arr[], int size) {
    int max = arr[0];
    int secondMax = arr[0];
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }
    
    return secondMax;
}

int main() {
    int size;
    
    printf("Input the size of the array: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Input %d elements in the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("element - %d: ", i);
        scanf("%d", &arr[i]);
    }
    
    int secondLargest = findSecondLargest(arr, size);
    
    printf("The second largest element in the array is: %d\n", secondLargest);
    
    return 0;
}


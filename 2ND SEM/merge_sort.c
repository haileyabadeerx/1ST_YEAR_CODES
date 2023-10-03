#include <stdio.h>

void merge(int arr[], int left[], int leftSize, int right[], int rightSize) {
    int i = 0, j = 0, k = 0;

    while (i < leftSize && j < rightSize) {
        if (left[i] < right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }

    while (i < leftSize) {
        arr[k++] = left[i++];
    }

    while (j < rightSize) {
        arr[k++] = right[j++];
    }
}

void mergeSort(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    int mid = n / 2;
    int left[mid];
    int right[n - mid];

    for (int i = 0; i < mid; i++) {
        left[i] = arr[i];
    }

    for (int i = mid; i < n; i++) {
        right[i - mid] = arr[i];
    }

    mergeSort(left, mid);
    mergeSort(right, n - mid);

    merge(arr, left, mid, right, n - mid);
}

int main() {

    printf("Welcome! This is Group 1's Merge Sort Program.\n\n");
    int n; //size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n<=0){ //for invalid input size such as negatives and zero
      printf("Please enter a valid array size");
      return 0;
    }

    int arr[n];
    printf("Enter %d elements to be sorted:\n", n);
    for (int i = 0; i < n; i++) { //inputting elements for the array
        scanf("%d", &arr[i]);
    }

    mergeSort(arr, n);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

  printf("\nThank you for using our program! :)");
    return 0;
}

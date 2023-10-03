#include <stdio.h>

void merge(int arr[], int first, int mid, int last ) {
    int i = first, j = mid+1, k = first;
    int b[50];

    while (i <= mid && j <= last) {
        if (arr[i] <= arr[j]) {
            b[k++] = arr[i++];
        } else {
            b[k++] = arr[j++];
        }
    }
    if (i>mid) {
    while (j<=last) {
        b[k++] = arr[j++];
        }
    }
    else {
    while (i<=mid) {
        b[k++] = arr[i++];
        }
    }


void mergeSort(int arr[], int first, int last) {
    int mid;
    /*if (n <= 1) {
        return;
    }*/
    if (first < last){
        mid = (first + last)/2;
        mergeSort(arr,first,mid);
        mergeSort(arr,mid+1,last);
        merge(arr,first,mid,last);
    }
    /*
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

    merge(arr, left, mid, right, n - mid); */
}

int main() {

    printf("Welcome! This is Group 1's Merge Sort Program.\n\n");
    int n; //size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if(n<=0){ //for invalid input size such as negatives and zero
      printf("Please enter a valid array size");
    }
    else{
    int arr[n];
    printf("Enter %d elements to be sorted:\n", n);
    for (int i = 0; i < n; i++) { //inputting elements for the array
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n-1);

    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
       }
    printf("\n");
    }

  printf("\nThank you for using our program! :)\n");
    return 0;
}

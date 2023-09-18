#include <stdio.h>
#define MAX_SIZE 10

int summer(int *arr, int size){

    int i, sum = 0;
    for(i = 0; i < size; i++){
        sum += *(arr + i);
    }
    return sum;
}

int main(){

    int size;

    int arr[MAX_SIZE];

    int i;
	
	do {	
    printf("Input the number of elements to store in the array (max 10): ");
    scanf("%d", &size);
    if (size > MAX_SIZE)
    	printf("Invalid input. Try again.\n");
	} while (size > MAX_SIZE);
    printf("Input %d number of elements in the array: \n", size);


    for(i = 0; i < size; i++){
        printf("\nelement - %d : ", i + 1);
        scanf("%d", arr + i);
    }

    printf("\nThe sum of array is: %d", summer(arr, size));

    return 0;
}


#include <stdio.h>
#include <stdlib.h>


void finder(float *arr, int size, float *largest){
    int i;
    *largest = *arr;

    for(i = 1; i < size; i++){
        if(*(arr + i) > *largest){
            *largest = *(arr + i);
        }
    }

}

int main(){

    float *arr, largest;
    int size, i;

	do {
    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &size);
    if(size > 100 || size < 1)
    	printf("Invalid input. Try again.\n");
	} while (size > 100 || size < 1);

    arr = (float *) malloc (size * sizeof(float));

    for(i = 0; i < size; i++){
        printf("Number %d: ", i + 1);
        scanf("%f", arr + i);
    }

    finder(arr, size, &largest);

    printf("The largest element is %.2lf", largest);


    return 0;
}


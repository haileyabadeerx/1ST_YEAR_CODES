#include <stdio.h>

void finder(int arr[], int size, int target) {
	int found = 0;
	
    for(int i = 0; i < size; i++){
		for(int j = i; j < size; j++){
			if(arr[i] + arr[j] == target){
				printf("\nIndices of the two numbers whose sum equal to target value: %d and %d\n", i, j);
				printf("%d and %d equal to %d", arr[i], arr[j], target);
				found = 1;
			}
		}
	}
	if(found == 0){
		printf("No indices found equal to target");
	}
}



int main() {
    int arr[] = {4, 2, 1, 5};
    int target;
    
    printf("Enter a specific number target: ");
    scanf("%d", &target);
    
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\nTarget Value: %d\n", target);

    finder(arr, size, target);

    return 0;
}

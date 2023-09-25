#include <stdio.h>

int main ()	{
	
	int array[10];
	int ArElem, i;
	
	printf("Kindly enter how many numbers you'd like to sort: ");
	scanf("%d", &ArElem);
	
	printf("\nKindly enter the numbers:\t");
	for (i=0;i<ArElem;i++)
		scanf("%d", &array[i]);
	
	printf("\nYour numbers are:\n");	{
		for (i=0; i<ArElem; i++)
			printf("\t | %d |", array[i]);
			}
	
	printf("\nEven numbers are:\t\n");
	for (i=0; i<ArElem; i++)	{
		if (array[i]%2==0)
			printf("\t%d", array[i]);
	}
	printf("\nOdd numbers are:\t\n");
	for (i=0; i<ArElem; i++)	{
		if (array[i]%2==1)
			printf("\t%d", array[i]);
	}
	return 0;
}

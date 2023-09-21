#include <stdio.h>

int main (){
	
	printf("Hello world!");
	
	printf("\n\nKindly enter your name please: ");
	
	char name[80];
	
	fgets(name, 80, stdin);
	//scanf("%s", name);
	
	printf("Oh, so you are %s How are you?\n\n", name);
	
	for (int i; i<=10; i++)
	if(i % 2 == 0)
		printf("%d\t", i);

	
	return 0;
}

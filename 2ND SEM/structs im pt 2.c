#include<stdio.h>
#include<conio.h>
struct record
{
char name[10];
int age;
};
struct record myfriend = {"Dhang", 24};
struct record *ptrtomyfriend = &myfriend;

int main (){
	printf("Enter name: ");
	scanf("%s", ptrtomyfriend->name);
	printf("Enter age: ");
	scanf("%d", &ptrtomyfriend->age);
	
printf("%s %d", ptrtomyfriend->name, ptrtomyfriend->age);
return 0;
}


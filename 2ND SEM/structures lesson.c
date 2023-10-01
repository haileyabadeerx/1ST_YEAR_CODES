#include <stdio.h>

struct student
{
    char name[80];
    int SID;
    float grade;
    int age;
    long int CPno;
} stud[3];

//optional
//struct student stud = {"Jade", 3, 2.75, 19, 91722};

int main ()
{

for(int i = 0; i < 3; i++) {
    printf("\nPlease enter your name: \n");
    scanf("%s", stud[i].name);

    printf("Enter your Student ID: \n");
    scanf("%d", &stud[i].SID);

    printf("Enter your grade: \n");
    scanf("%f", &stud[i].grade);

    printf("Enter your age: \n");
    scanf("%d", &stud[i].age);

    printf("Enter your CP number: \n");
    scanf("%ld", &stud[i].CPno);

   printf("Here is your record:\n%s | %d | %.2f | %d | %ld | \n", stud[i].name, stud[i].SID, stud[i].grade, stud[i].age, stud[i].CPno);
}
    return 0;
}

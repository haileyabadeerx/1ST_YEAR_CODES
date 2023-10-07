#include <stdio.h>
#include <stdlib.h>

struct student{
    char name[100];
    char course[50];
    int age;
    double gwa;
};

int main()
{
    struct student studentA;
    studentA.age = 19;
    studentA.gwa = 1.5;
    strcpy( studentA.name, "Ivera Joy Haro");
    strcpy( studentA.course, "Nursing");

    struct student studentB;
    studentB.age = 18;
    studentB.gwa = 2.5;
    strcpy( studentB.name, "Hailey Kendra McDuffie");
    strcpy( studentB.course, "Information Technology");

    printf("%s \n", studentA.name);
    printf("%d \n", studentA.age);
    printf("%s \n", studentA.course);
    printf("%f \n", studentA.gwa);

    printf("%s \n", studentB.name);
    printf("%d \n", studentB.age);
    printf("%s \n", studentB.course);
    printf("%f \n", studentB.gwa);
    return 0;
}

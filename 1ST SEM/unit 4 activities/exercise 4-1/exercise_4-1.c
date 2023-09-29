#include <stdio.h>

int main(int argc, const char * argv[])
{
    int age;

    printf("Hello! This program determines whether you are a child (C), a teen ager (T), or an adult (A).\n\n");
    printf("Kindly enter your age:\t");
    scanf("%d",&age);

    if(age<=12)
        printf("\nC\n");
    else if (age>=13&&age<=19)
        printf("\nT\n");
    else if (age>19)
        printf("\nA\n");

    return 0;
}

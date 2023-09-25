#include <stdio.h>
//#include <conio.h>

int main()
{
    char name[80];
   // int name = 25;

    printf("Input name: ");
    gets(name);
    puts(name);

    printf("\n%s", name);

    return 0;
}

#include <stdio.h>

int main(int argc, const char * argv[])
{
    int quiz;
    printf("Enter your score:\n");
    scanf("%d", &quiz);
    switch(quiz)
    {
        case 'a': {printf("Hello\n");
                  printf("Nyenye\n");}
                 break;
        case 'b':
        case 'c': printf("A\n");
                 break;
        case 'd': printf("B\n");
        case  6: printf("C\n");
        case 'e': printf("D\n");
        default: printf("Thank you\n");
    }
    printf("%c\n",65);
    return 0;
}

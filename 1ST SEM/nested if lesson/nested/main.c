#include <stdio.h>


int main(int argc, const char * argv[])
{//nanliligaw
    char bahay;
    int joy;


    printf("INPUT bahay if punta=y if not=n:\n");
    scanf("%c",&bahay);
    printf("Input joy if masaya=1 if not =2:\n");
    scanf("%d",&joy);
    if(bahay=='y'||bahay=='Y')
        {if(joy==1)
            printf("Yes\n");
        else printf("You are \"EKIS\" to me\n");}

    printf("Thank you\n");

    return 0;
}

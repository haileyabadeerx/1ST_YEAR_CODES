#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a,b,c;

    printf("Enter three numbers:\t");
    scanf("%d %d %d", &a,&b,&c);

    if (a>=b&&a>=c)
        {
        if(b>=c)
            printf("\nDescending order:\t%d\t%d\t%d\n",a,b,c);
        else
            printf("\nDescending order:\t%d\t%d\t%d\n",a,c,b);
        }
    else if (b>=a&&b>=c)
        {
        if(a>=c)
            printf("\nDescending order:\t%d\t%d\t%d\n",b,a,c);
        else
            printf("\nDescending order:\t%d\t%d\t%d\n",b,c,a);
        }
    else if (c>=a&&c>=b)
        {
        if(a>=b)
            printf("\nDescending order:\t%d\t%d\t%d\n",c,a,b);
        else
            printf("\nDescending order:\t%d\t%d\t%d\n",c,b,a);
        }

    return 0;
}


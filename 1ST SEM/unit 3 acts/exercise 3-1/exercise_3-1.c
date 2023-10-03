#include <stdio.h>

int main(int argc, const char * argv[])
{
    int L,W,H,V;

    printf("Enter length:\t");
    scanf("%d",&L); //L for length

    printf("Enter width:\t");
    scanf("%d",&W);//W for width

    printf("Enter height:\t");
    scanf("%d",&H);//H for height

    V = L*W*H;//V for volume

    printf("\nThe volume of the box is %d.\n",V);

    return 0;
}

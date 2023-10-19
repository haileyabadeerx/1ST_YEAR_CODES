#include <stdio.h>

int rel_prime(int i, int j){
    int min, relative = 1;
    min = i < j ? i : j; //determines which of the two nums is smaller
    for(int k=2; k<=min; k++){
        if(i % k == 0 && j % k == 0){
                relative = 0;
               break;
        }
    }
    return relative;
}

int main(int argc, const char * argv[])
{
    int i,j,relative;
    printf("This program determines if two integers are relatively prime.\n");
    printf("\nEnter two positive integers: ");
    scanf("%d %d", &i,&j);

    if(i<0 || j<0)
        printf("\nINVALID INPUT!\n");
    else{
        if(rel_prime(i,j))
            printf("\nThe integers %d and %d are relatively prime.\n", i,j);
        else
            printf("\nThe integers %d and %d are not relatively prime.\n", i,j);
    }

    return 0;
}

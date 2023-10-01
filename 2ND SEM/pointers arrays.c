#include <stdio.h>

void display(char **output);

int main ()
{
    int x[5] = {3, 1, 4, 7, 10};

    for (int y = 0; y<5; y++){
    if ( *(x+y)%2 != 0)
        printf("%d\t", *(x + y));
    //else
       // printf("hi\n");
   //
    }

    return 0;
}

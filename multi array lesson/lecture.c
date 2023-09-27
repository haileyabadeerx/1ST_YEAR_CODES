#include <stdio.h>

int main (int argc, const char * argv[])
{
    void CCIS(int *x);
   // int BSIT[3][3] = {{1,0,0},{0,5,0},{0,0,9}};
    //int bsit[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int pup[5]={2,4,6,8,10};

    CCIS(pup);

    return 0;
}

void CCIS(int *x)
{int a;
    for (a=0; a<5; a++)
        printf("%d\t", *x++);
      //  printf("\n");
}

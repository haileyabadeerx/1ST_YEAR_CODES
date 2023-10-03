#include <stdio.h>
#include <stdlib.h>

int main(){

    int randomNum = 1;
    while(randomNum <= 1000000){
        printf("%d ", randomNum);
        randomNum = randomNum + 1;
    }
    /* or you can do randomNum++; to add 1
    }*/
/*
    int randomNum = 1;
    do{
        printf("%d ", randomNum);
        randomNum = randomNum + 1;
    }while(randomNum <= 109240325);
*/

    return 0;
}

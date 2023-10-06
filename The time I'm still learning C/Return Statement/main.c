#include <stdio.h>
#include <stdlib.h>


double cube(double num){
    double ans = num * num * num;
    return ans;
    printf("this will never be executed");

}

int main(){

    printf("Corrent Answer: %f", cube(2.0));

    return 0;
}

/* prototyping

double cube(double num);

int main(){

    printf("Answer: %f", cube(2));

    return 0;
}
double cube(double num){
    double ans = num * num * num;
    return ans;
}
 */


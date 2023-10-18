#include <stdio.h>

void TRIANGLE(int s1, int s2, int s3){

    if(s1==s2 && s1 == s3)
        printf("\nYour triangle is EQUILATERAL.\n");
    else if(s1==s2 || s2 == s3 || s1 == s3)
        printf("\nYour triangle is ISOSCELES.\n");
    else
        printf("\nYour triangle is SCALENE.\n");

}

int main (int argc, const char * argv[]){

    int s1,s2,s3; //for the three side of the triangle

    printf("This program identifies a type of triangle.\n");
    printf("\nEnter the length per side of your triangle: ");
    scanf("%d %d %d", &s1, &s2, &s3);

    if(s1<=0 || s2<=0 || s3<=0)
        printf("\nYou entered an invalid length.\n");
    else
        TRIANGLE(s1,s2,s3);

 return 0;
}

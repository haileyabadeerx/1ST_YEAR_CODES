#include <stdio.h>
#include <stdlib.h>
/*
void main1 (){
    printf("Hello World!\n");
}
*/
int main(int argc, const char * argv [])
{
    /*
    char name[80];
    printf("Name:");
    scanf("%s", name);

    printf("Hi, %s", name); */


    int a, b, c, d, e, f, g, sum;
    float amount;
    char name[80];
    printf("Name please:\t");
    scanf("%s", name);
    printf("Please enter your coins: \n");
    printf("\t 5 centavo: \t");
    scanf("%d", &a);
    printf("\t 10 centavo: \t");
    scanf("%d", &b);
    printf("\t 25 centavo: \t");
    scanf("%d", &c);
    printf("\t 1 peso: \t");
    scanf("%d", &d);
    printf("\t 5 peso: \t");
    scanf("%d", &e);
    printf("\t 10 peso: \t");
    scanf("%d", &f);
    printf("\t 20 peso: \t");
    scanf("%d", &g);
    sum = a + b + c + d + e + f + g;
    amount = (a*.05)+(b*.10)+(c*.25)+(d*1)+(e*5)+(f*10)+(g*20);
    printf("%s, your %d coins is Php %.2f", name, sum, amount);




/*
    int age, IPA;
    char name[80];
    printf("What is your name: ");
    scanf("%s", name);
    printf("Your age please: ");
    scanf("%d", &age);
    IPA = age/2+7;
    printf("%s, your ideal partner\'s age is %d", name, IPA);

    /*
    int a, b, c;
    char name[80];

    printf("Name please\n");
    scanf("%s", name);

    printf("Please enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
   // prod = a * b * c;
    printf("%s, \t\t\t\"Julia\" The product is %d\n","Xtine",a*b*c);

    /*
    printf("Hello world!\n");
    printf("BSIT 1-4\n");
    */
    return 0;
}

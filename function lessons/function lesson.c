#include <stdio.h>

int main(int argc, const char * argv[])
{
    int a = 65, b = 4;

    printf("Receiving the result of max function\n");
    printf("The result is %d\n", max(a,b));

   /* int max(int num1, int num2);
    int a = 9, b = 4;
    int x;

    printf("Receiving the result of max function\n");

    x = max(a,b);//pause and trace where is the definition
    printf("The result is %d\n",x); */
    return 0;
}

int max(int num1, int num2)
{
    int result;
    if (num1>num2)
        result = num1;
    else
        result = num2;
        greet();

    return result;
}

void greet()
{
    printf("Hello BSIT 1-4!\n");
}

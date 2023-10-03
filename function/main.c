#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("top \n");
    sayHi("Ivera", 19);
    sayHewo("Joy", "baby" );
    sayLoe("Haro", "mine");
    printf("bottom");

    return 0;
}

void sayHi(char name[], int age){

    printf("Hello %s, you are %d \n" , name, age);
}

void sayHewo(char name [], char cs[]){

    printf("Hewo %s, you are my %s\n", name, cs);

}

void sayLoe(char name [], char craft[]){

    printf("Loe %s, you are %s \n", name, craft);

}

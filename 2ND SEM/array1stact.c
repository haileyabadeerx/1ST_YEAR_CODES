/*nclude <stdio.h>
#include <stdlib.h>

int main()
{
    char letters[4] = {'N','S','E','W'};

    for(int i=0; i<4; i++)
    {
        printf("%c", letters[i]);
    }

    /*printf("%c%c%c%c", letters[0],letters[1],letters[2],letters[3]);
    char letters[4];

    letters[0] = 'N';
    letters[1] = 'S';
    letters[2] = 'E';
    letters[3] = 'W';

    printf("%c%c%c%c", letters[0],letters[1],letters[2],letters[3]);


return 0;
}

*/

#include<stdio.h>
#include<conio.h>
#define r 3
#define c 4

int z[r][c] = {1,2,3,4,5,6,7,8,9,10,11,12};
int main()
{
int a, b, C = 999;
//clrscr();
for(a=0;a<r;++a)
for(b=0;b<c;++b)
if(z[a][b]<C)
C= z[a][b];
printf("%d",C);
getch();
return 1;
}


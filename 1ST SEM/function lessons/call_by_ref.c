#include <stdio.h>
#include <conio.h>

compute_rating(float midterm, float final, float *rating)
{
    //Function that will compute the final rating
    *rating = (midterm + final)/2;
}

int main(int argc, const char * argv[])
{
   char name[25];
   float mid,fin,fin_grd;
   system ("cls");
   puts("Please enter your name");
   gets(name);
   printf("Enter your midterm grade");
   scanf("%f",&mid);
   printf("\nEnter your final grade");
   scanf("%f",&fin);
   compute_rating(mid,fin,&fin_grd);
   printf("%s got a final rating of %f", name,fin_grd);
   getch();
    return 0;
}

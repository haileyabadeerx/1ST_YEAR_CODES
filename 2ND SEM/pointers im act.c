/*void sum(double b[], int n)
{
  int i;
  double *sum_even;
  double *sum_odd;

  sum_even = malloc(sizeof(double));
  sum_odd = malloc(sizeof(double));

  for (i = 0; i < n; i++) {
    if (i % 2 == 0)
      *sum_even += b[i];
    else
      *sum_odd += b[i];
  }

  printf("The sum of the even elements is %.2f\n", *sum_even);
  printf("The sum of the odd elements is %.2f\n", *sum_odd);
}

int main()
{
  double b[] = {1.0, 2.0, 3.0, 4.0, 5.0};
  int n = sizeof(b) / sizeof(b[0]);

  sum(b, n);

  return 0;
}



*/













#include <stdio.h>

int array[] = {4, 5, 8, 9, 8, 1, 0, 1, 9, 3};
int index;
int *p = array;

int main ()
{
    index = 0;

    while ( *(p  + index) != 0) {
        ++index;
    }

    printf("Number of elements before zero %d\n", index);

    getch();

    return 0;

}


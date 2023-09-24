#include <stdio.h>

int perf_div(int value){
int result = 0;
	for(int i = 1; i < value;i++){
		if (value % i == 0){
			result += i;
		}
	}
	if (value == result){
		return 1;
} else
	return 0;
}

int main(){
int low,high;
printf ("Input lowest search limit of perfect numbers : ");
scanf("%d", &low);
printf ("Input highest search limit of perfect numbers : ");
scanf("%d", &high);

printf ("The perfect numbers between %d to %d are : ", low,high);
for (int i= low; i<= high; i++){
	if (perf_div(i) == 1){
		printf ("%d ",i);
	}
}
  return 0;
}


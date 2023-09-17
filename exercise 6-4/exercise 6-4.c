#include <stdio.h>
#define START 700
#define FINISH 1100

int i, result, p;
int if_prime(int p);
void goldbach (int g);

int main(int argc, const char * argv[]) {
if (START > 2 && START % 2 == 0){
    int num = START;
        printf("Every even number greater than 2 is the sum of two primes:\n\n");
        while (num <= FINISH){
        goldbach (num);
        num += 2;
        }
}else {
        printf ("Your number is not even.");
}

  return 0;
}

//check if the numeber is prime
int if_prime (int p) {
    for(int i = 2; i*i <= p; i++) {
      if(p % i == 0) {
        return 0;
    }if (i*i > p){
        return 1;
       }
    }
}

//Goldbach conjecture process
void goldbach (int g){
    for (int last_prime = 2; last_prime <= g; last_prime++){
       p = last_prime;
       if (if_prime(p)){
        result = g - p;
       }if (if_prime(result)){
        printf ("%d = %d + %d\n",g,p,result);
        break;}
    }
}

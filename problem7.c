/* 
*This program goes through every prime number until it gets to the 10001'th prime
*Written By: Joshua Newell
*8/5/13
*/

#include <stdio.h>

int primeCheck(int i);

int main(){
int numberprimes=6;
int i=14;
    while(numberprimes < 10001){
   // printf("i = %d\n", i);//debug
    if (primeCheck(i) == 1){
     //   printf("%d is prime\n", i);//debug
        numberprimes++;
    }
    i++;
    }

printf("---------------Problem 7------------\n");
printf("The 10001st prime number is %d\n", i-1);
printf("------------------------------------\n");

    return 0;
}

int primeCheck(int i){
int j;
//int prime=1;
    for(j=2; j<i; j++){
        if(i%j==0){
        return 0;
        }    
    }
  //  printf("%d is prime = %d\n", i, prime);//debug
    return 1;
}

/* This program finds the sum of all prime numbers under 2million
* Written By:
* Joshua Newell
* 8/5/13
*/

#include <stdio.h>
#include <math.h>

//to use sqrt correctly, build with gcc -Wall program.o -o program -lm    
//The -lm is what allows you to use sqrt

int primeCheck(unsigned long long i);

int main(){
unsigned long long number;
unsigned long long sum=2;
int print=0;

    for(number=3;number <2000000; number+=2){
  if(number>250000 && print <1){
	printf("Calculating....\n");
	printf("..\r");
	fflush(stdout);
	print++;
	}
	if(number>500000 && print <2){
	printf("....\r");
	fflush(stdout);
	print++;
	}
	if(number>750000 && print <3){
	printf("......\r");
	fflush(stdout);
	print++;
	}
	if(number>1000000 && print <4){
	printf("........\r");
	fflush(stdout);
	print++;
	}
	if(number>1250000 && print <5){
	printf("..........\r");
	fflush(stdout);
	print++;
	}
	if(number>1500000 && print <6){
	printf("..........\r");
	fflush(stdout);
	print++;
	}
	if(number>1750000 && print <7){
	printf("............\r");
	fflush(stdout);
	print++;
	}
	if(number>1999990 && print <8){
	printf("............100%%\n");
	print++;
	}

    if (primeCheck(number) == 1){
		sum+=number;
	//	printf("sum= %llu after %llu is added\n", sum, number);//debug
		}
    
    }

printf("---------------Problem 10------------------------\n");
printf("The sum of all primes below 2 million is %llu\n", sum);
printf("-------------------------------------------------\n");

    return 0;
}

int primeCheck(unsigned long long i){
unsigned long long j;
	if(i%2 ==0){
	return 0;
	}
	
    for(j=3; j<=sqrt(i); j+=2){
        if(i%j==0){
        return 0;
        }    
    }
    return 1;
}

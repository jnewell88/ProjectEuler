/*
*This program finds the smallest divisible number that is even divisible by the *numbers from 1 to 20
*Written by: Joshua Newell
*8/5/13
*/ 

#include <stdio.h>

int divisibleCheck(int i);

int number = 200000000;
int main(){
    while ( divisibleCheck(number) == 0){
    
    number++;
    }
    printf("----------------------Problem 5------------------------------------\n");
    printf("The smallest possible number that is evenly divisible is %d\n", number);
    printf("-------------------------------------------------------------------\n");
    
    return 0;
}

int divisibleCheck(int number){
int divisible = 0;
int i;
int numdiv=0;
    for(i=1;i<21;i++){ //loop through 1 through 20
    if(number % i == 0){
    numdiv++;
    }
    }
    
    if(numdiv == 20){
    divisible = 1;
    }
    
return divisible;
}

/* 
*This program finds the difference between the sum of squares of numbers from 1-100 
*and the square of the sum of numbers 1-100
* Written by: Joshua Newell
* 8/5/13
*/


#include <stdio.h>

int main(){
    int i;
   int sumsquares=0;
   int squaresum=0;
   int difference=0;
   for(i=1;i<101;i++){ //from 1 to 100
    sumsquares+= i*i; //add the square to the sum;
    squaresum+=i;
    } 
   
    
    squaresum*=squaresum; //find square of the sum of 1 to 100

    difference = squaresum - sumsquares;
    printf("--------------------Problem 6--------------------------\n");
    printf("The difference between %d and %d is %d\n", squaresum, sumsquares, difference);
  printf("-------------------------------------------------------\n");
    return 0;
}

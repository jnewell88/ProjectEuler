#include <stdio.h>

/*This program finds the sum of the multiples of 3 or 5 that are below 1000
* The Correct answer is 233168
* Written by: Joshua Newell
* 8/2/13
*/

int main(){

int counter=0;//Initialize counter to 0
int sum=0;//Initialize sum to 0

while (counter <1000){ //Increment until counter > 1000
    if (((counter % 3) == 0) || ((counter %5)==0)){ //If a multiple of 3 or 5
    
        //Show each iteration, for verification
     //   printf("sum += %d\n sum is now = %d\n", counter, sum); Debug
        sum+= counter; //Add current counter to total
    }
    counter++;//Increment Counter
}
printf("------------------Problem 1------------------------------\n");
printf("The sum of the multiples of 3 or 5 below 1000 is %d\n", sum); //Output result
printf("---------------------------------------------------------\n");
return 0;
}

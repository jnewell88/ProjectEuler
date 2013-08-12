#include <stdio.h>

/* This program finds the sum of all even fibonacci terms up to 4 million
* The answer is 4613732
* Written by: Joshua Newell
* 8/2/13
*/
int main(){

//Initialization of all variables
int prev = 1;
int curr = 2;
int temp = 0;
int sum =0;

while (curr < 4000000){
    temp = curr; //save current number to temporary variable
    curr = prev + temp; //set new current to current + previous number
    prev = temp; //set new previous value to the temporarily stored number
    if(prev %2 ==0){ //If previous number is even
        sum += prev; //Add previous to sum
    }
}
//Print output
printf("-----------------------Problem 2-------------------------------------\n");
printf("The sum of the even valued fibonacci terms up to 4 million = %d\n", sum);
printf("---------------------------------------------------------------------\n");
return 0;
}

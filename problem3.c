/* This program finds the largest prime factor of a large number
* The answer is 6857
* Written by: Joshua Newell
* 8/5/13
*/
#include <stdio.h>

int main(){
    //declare and initialize variables
    long long i, sqi;
    long long value, large = 600851475143LL;
    long long max = 0LL;
    i   = 2LL;
    sqi = 4LL; //i*i
    
    
    for(value = large; sqi <= value ; sqi +=  2LL * i++ + 1LL){//while sqi is less than or equal to value
        while(value % i == 0LL){ //while value is divisible by i
            value /= (max=i); //divide value by max=i
        }
    }

    if(value != 1LL && value != large){//if value is not equal to 1 or the value for large
        max = value; //set maximum as the value of value
    }
    if(max == 0LL){ //if max is equal to 0
        max = large;    //set max as the value of large
    }
    
    printf("-----------------------Problem 3----------------------------\n");
    printf("The largest prime factor of the number %lld is %lld\n", large, max); //output result
    printf("------------------------------------------------------------\n");
    return 0; 
}

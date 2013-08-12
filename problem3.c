/* This program finds the largest prime factor of a large number
* The answer is 6857
* Written by: Joshua Newell
* 8/5/13
*/
#include <stdio.h>

int main(){
    long long i, sqi;
    long long value, large = 600851475143LL;
    long long max = 0LL;

    i   = 2LL;
    sqi = 4LL; //i*i
    for(value = large; sqi <= value ; sqi +=  2LL * i++ + 1LL){
        while(value % i == 0LL){
            value /= (max=i);
        }
    }

    if(value != 1LL && value != large){
        max = value;
    }
    if(max == 0LL){
        max = large;
    }
    
    printf("-----------------------Problem 3----------------------------\n");
    printf("The largest prime factor of the number %lld is %lld\n", large, max);
    printf("------------------------------------------------------------\n");
    return 0; 
}

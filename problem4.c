/* 
*This program is a palindrome checker, it finds the palindromes of every 
* combination of 3 digit number, and then finds the largest palindrome out of the list
* By: Joshua Newell
* 8/5/2013
*/


#include <stdio.h>

/* function prototypes */
int palCheck(int);
/*---------------------*/

int main(){

    //initialize variables
    int pal, a, b, palmax=0;
    
    //Get largest product
    for ( a = 999; a >= 100; a--) //first 3 digit number
    {
        for (b = 999; b >= 100; b--) //second 3 digit number
        {
            pal = a*b;
            if(palCheck(pal)){//if pal is a palindrome
            
             //   printf("Palindrome is %d\n", pal); //debug
                if(pal > palmax){//if pal is greater than the max, set the max as pal
                palmax = pal;
                }
            }
                
        }
    }
    printf("-----------Problem 4--------------\n");
    printf("The largest palindrome was %d\n", palmax);//show output
    printf("----------------------------------\n");
    return 0;
}

int palCheck(int num){

    int status = 1;
    int digit, rev=0, ck_num;
    ck_num = num;
    
    while (num)
    {
        digit = num % 10; //get last digit
        num /= 10; //divide by 10 to get last digit off
        rev = rev * 10 + digit; //move previous digit left, add current digit to end
    }
    
    if (rev == ck_num) //if starting number is equal to reversed number
        status = 1;
    else
        status = 0;
    return status;
}

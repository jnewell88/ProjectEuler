/* This program finds the largest triangle number with atleast 500 factors and gives the value
* Written By:
* Joshua Newell
* 8/6/13
*/

#include <stdio.h>
#include <math.h>

int check_number_of_factors(int number);

int main(){
  int number=0;
	int j=1;

	while(check_number_of_factors(number)<500){
		   number += j;
   			 j++;
   			 }
	printf("---------------------------------Problem 12------------------------------------------\n");
	printf("The largest triangle number with over 500 factors is %d, which has %d factors\n", number,check_number_of_factors(number));
	printf("-------------------------------------------------------------------------------------\n");

	return 0;
}

int check_number_of_factors(int number){
	int i,num_factors=0;
	int squareroot =sqrt(number);

	for(i=1;i<=squareroot;i++){
		if((number%i)==0)
			num_factors+=2;
	}
	if (squareroot * squareroot == number)
        num_factors--;
    
	return num_factors;
}

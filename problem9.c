/*This program finds the value of a, b, c, and product of the three so that these conditions are true
* a+b+c=1000
* a^2+b^2=c^2
* Written by Joshua Newell
* 8/5/13
*/

#include <stdio.h>

int main(){

int a=0,b=0,c=0;
int s=1000;
int found =0;
int product=0;
for( a=1; a< s/3; a++) {
  for(b=a; b<s/2; b++){
		c=s-a-b;
		if((a*a + b*b) == c*c){
			found=1;
			break;
		}
	}
	
	if (found){
	printf("---------------------Problem 9---------------------------\n");
	printf("The pythagoran triple is: a=%d, b=%d, c=%d\n", a,b,c);
	product = a*b*c;
	printf("The product of the pythagorean triple is: %d\n", product);
	printf("----------------------------------------------------------\n");
		break;
	}
}

return 0;
}

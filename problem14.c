

#include <stdio.h>


/*
Function prototypes
*/
long long odd_funct(long long oddnumber);
long long even_funct(long long evennumber);
int evenCheck(long long number);

int main(){

	long long number=1,numstore=0,answer=0;
	int term=0,maxterms=0;
	int status=1;

		for(number=1; number<1000000; number++){
		answer=0;
		status=1;
			answer=number;
			while(status){ //keep looping until you get to the term 1

				if((answer%2)==0){
					//printf("%d is EVEN\n",answer);
					answer=even_funct(answer);
					term++;
					}
				else{
					//printf("%d is ODD\n",answer);
					answer=odd_funct(answer);
					term++;
					}	
			
			if(answer==1){

				term++;
				status=0;
				}
			}




	
	if(term > maxterms){
		numstore=number;
		maxterms=term;
			//printf("The current starting number that produces a chain %d terms long is %d\n",maxterms,number);
	}
	term=0;//reset # of terms for next number
	printf("%lld\r",number);
	fflush(stdout);


	

	
	
}

	printf("The starting number that produces the longest chain of %d terms is %lld\n", maxterms, numstore);

return 0;
}

int evenCheck(long long number){
	int result=0;
	if((number%2)==0){
		result = 1;

	}
	else{
		result=0;
	}	
	return result;
}

long long odd_funct(long long number){
	return ((3*number)+1);
}

long long even_funct(long long number){
	return (number/2);
}

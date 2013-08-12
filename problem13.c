/* This program opens up a file and finds the sum of all 100 numbers with 50 digits each
* Written By:
* Joshua Newell
* 8/7/13
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]){
char digit[50];
int result=0;
int vals[49];
int count;
int value;

int x=0, y=0, sum=0, carry=0;
    char num[100][50];
    FILE *fp;
     
    fp=fopen(argv[1], "r");//open file that is passed as an argument
    printf("Opening file %s\n", argv[1]);

   while (fscanf(fp,"%s",digit)==1){
   
        for(y=0;y<51;y++){        
             	num[x][y] = digit[y]-48; //convert from ASCII to decimal by subtracting 48
       }
       x++;
  	}
         fclose(fp);//close file

 
     for(y=49;y>=0;y--){//loop through each column
     	sum=0;//reset sum for next iteration
     	sum+=carry;//add carry from previous iteration
     	for(x=0;x<100;x++){//loop through each number

   		 	//printf("%d",num[x][y]);//debug
     		sum+=num[x][y];
     	}
     	carry=sum/10;
     	value=sum%10;
     	//printf("value=%d\n",value);//debug
     	vals[y] = value;
     }
     result=carry;

printf("-----------------------Problem13-----------------------------\n");
printf("The sum of the 100 fifty digit numbers listed in %s is ", argv[1]);
printf("%d",result);
count=0;
while(count<50){ //list the 49 stored values
printf("%d",vals[count]);
count++;
}
printf("\n");
printf("The first 10 digits of the sum are: %d",result);
count=0; 
while(count<8){ //list the 8 stored values
printf("%d",vals[count]);
count++;
}
printf("\n");
printf("-------------------------------------------------------------\n");

return 0;
}

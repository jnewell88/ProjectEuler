/* 
*This program opens up a file and finds the greatest product of 5 consecutive numbers
*Written By: Joshua Newell
*8/5/13
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int index1, k, length, i;
int number[1000] = {0};
char digit[50];
int product, new_product, j;
int main(int argc, char *argv[]){

    if( argc !=2){
        printf("ERROR!\nCorrect Usage: %s filename\n", argv[0]);
    }   
    
    else{
FILE *fp;
printf("----------------------------Problem 8-------------------------------------------\n");
printf("Opening file %s\n", argv[1]);
fp = fopen(argv[1], "r");
    index1=0;
    
    while (fscanf(fp,"%s",digit)==1){
                length=strlen(digit);

        for(k=0;k<length;k++)    {   number[index1]=digit[k]-48;index1++;   }
    }
    fclose(fp);
    
    for(i=0; i<995; i++){
    new_product = 1;
    for( j=i; j<=i+4; j++){
    new_product = new_product*number[j];
    }
    if(new_product >= product){
    product = new_product;
    }
    }
    printf("The greatest product of five consecutive numbers in %s is %d\n", argv[1], product);
    printf("--------------------------------------------------------------------------------\n");
    }

return 0;
}

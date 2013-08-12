/* This program finds the greatest product of four adjacent numbers in the same direction(up/down,left/right,diagonals)
* Written by:
* Joshua Newell
* 8/6/13
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int number[20][20];
int digit;
int max, right,down,topdiag,botdiag, x,y;
int main(int argc, char *argv[]){

    if( argc !=2){
        printf("ERROR!\nCorrect Usage: %s filename\n", argv[0]);
    }   
    
    else{
FILE *fp;
printf("----------------------------Problem 11-------------------------------------------\n");
printf("Opening file %s\n", argv[1]);
fp = fopen(argv[1], "r");
 
      for(x=0;x<20;x++)
    		for(y=0;y<20;y++){
    			fscanf(fp,"%d",&digit); //fill array from .txt file
    			number[x][y]=digit; 
    		}
    	
    	//Left to right products
    	/*
    	|<------->|
    	|<------->|
    	|<------->|
    	|<------->|
    	*/
    	for(x=0;x<20;x++)
    		for(y=0;y<17;y++){
    			right = number[x][y]*number[x][y+1]*number[x][y+2]*number[x][y+3];
    			if(right>max)
    				max=right;
    		}
    
    	//Up to down products
    	/*
    	[^^^^^^^^]
    	[||||||||]
    	[||||||||]
    	[||||||||]
    	[vvvvvvvv]
    	*/
    	for(x=0;x<17;x++)
    		for(y=0;y<20;y++){
    			down = number[x][y]*number[x+1][y]*number[x+2][y]*number[x+3][y];
    			if(down>max)
    				max=down;
    		}
    		
    	//Bottom Diagonal
    	/*
    	|     /x|
    	|    /xx|
    	|   /xxx|
    	|  /xxxx|
    	| /xxxxx|
    	|/xxxxxx|
    	*/
    	
    	for(x=0;x<17;x++)
    		for(y=0;y<17;y++){
    			botdiag = number[x][y]*number[x+1][y+1]*number[x+2][y+2]*number[x+3][y+3];
    			if(botdiag>max)
    				max=botdiag;
    		}
    		
    	//Top Diagonal
    	/*
    	|xxxxxx/|
    	|xxxxx/ |
    	|xxxx/  |
    	|xxx/   |
    	|xx/    |
    	|x/     |
    	*/
    	for(x=0;x<17;x++)
    		for(y=3;y<20;y++){
    			topdiag = number[x][y]*number[x+1][y-1]*number[x+2][y-2]*number[x+3][y-3];
    			if(topdiag>max)
    				max=topdiag;
    		}

    fclose(fp);
    
    printf("The greatest product of four adjacent numbers in the same direction(up/down,left/right,diagonals) %s is %d\n", argv[1], max);
    printf("--------------------------------------------------------------------------------\n");
    }
    



return 0;
}

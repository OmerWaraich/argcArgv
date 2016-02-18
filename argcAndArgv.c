#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
	int i;
    printf("argc = %d \n",argc);
 /*Argc is the number of words typed on the 
command line while running through cmd prompt*/
    for(i = 0; i < argc; i++)
    {
    	printf("Value on index of Argv[%d] = %s \n", i, argv[i] );
    }
    /* Argv basically an array that contains the values of agrc */
    return 0;
}

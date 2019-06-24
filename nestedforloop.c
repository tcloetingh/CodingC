// print multiplication table of numbers 1 to 10

#include <stdio.h>

int main(){

int i, j;

printf("\n\n");

for(i = 1; i<=10; i++)
	{ 
		for(j = 1; j<=10; j++) 

		{ 	
			printf("%4d", i * j);
			
		}
	}
	
}
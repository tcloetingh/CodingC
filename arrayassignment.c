/* Write a C program to sum and average of an array containing integers.
 Take integer input from user. User input may be positive or negative
  or zero. Sum of negative integers and positive integers should be
   printed separately. (Note: Write whole program in single function
    i.e. main function) */
    
  /*  
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ray[5]; 
	int total = 0;
	int i;
	
	for(i=0; i<=4; i++)
	{
		printf("\n\nPlease enter 5 numbers\n\n");
		scanf("%d", &ray[i]);
	}
		
	for(i=0; i<=4; i++)
	{
		total = total + ray[i];
	}
	
	printf("\n\nSum of numbers is %d\n\n", total);
	
	return 0;
}

 */

#include <stdio.h>
#include <stdlib.h>
int sumIntegers(int*);
int main()
{

int ray[5]; 
int i, total;
int *rayptr;

for(i=0; i<=4; i++)
	{
		printf("\n\nPlease enter 5 numbers\n\n");
		scanf("%d", &ray[i]);
	}
		total = sumIntegers(ray);	
		printf("sum of integers is %d\n\n", total);
}
int sumIntegers(int *rayptr)
{
int total = 0;
int i;
		for(i=0; i<=4; i++)
		{
			total = total + *rayptr;
			rayptr++;
		}
			return total;
}

















#include <stdio.h>

int main()
{

int num, i, t1 = 0, t2 = 1, nextTerm;

printf("Please enter number of sequences\n\n");
scanf("%d", &num);

printf("Fibonacci sequence: ");

	for(i = 1; i <= num; i++)
	{
 		printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;  
	}

}
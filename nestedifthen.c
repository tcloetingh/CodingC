#include <stdio.h>

int main() {

printf("\n");

int num;

printf("Enter Number\t");
scanf("%d", &num);

if(num < 0)
{
	printf("Number is Negative\n");
}
else
{									// nested // 
if(num == 0) 
	printf("Number is neither positive nor negative\n");
else printf("Number is Positive\n");
	}
}		
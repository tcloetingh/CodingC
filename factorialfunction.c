#include <stdio.h>

int factorial(int x);

int main()
{

int num, fact;

printf("\n\n");
printf("Please enter a number\n\n");
scanf("%d", &num);

fact = factorial(num);

printf("%d! = %d\n\n", num, fact);

return 0;

}
int factorial(int x)
{

	int i;
	int f = 1;

	for(i = x; i >= 1; i--)
	{
		f = f * i;
	}
	return f;
}
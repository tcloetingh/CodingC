/* Commented out version is without pointers, values do not swap
#include <stdio.h>
void interchange(int, int);
int main()
{
	int x;
	int y;

	
	printf("Enter number\n\n");
	scanf("%d", &x);
	printf("Enter second number\n\n");
	scanf("%d", &y);
	
	
	printf("Before interchange x = %d and y = %d\n\n", x, y);
	
	interchange(x, y);
	
	printf("After interchange x = %d and y = %d\n\n", x, y);
	
	
}
void interchange(int p, int q)
{
	int temp;
	
	temp = p;
	p = q;
	q = temp;
} */

#include <stdio.h>
void interchange(int*, int*);
int main()
{
	int x;
	int y;

	
	printf("Enter number\n\n");
	scanf("%d", &x);
	printf("Enter second number\n\n");
	scanf("%d", &y);
	
	
	printf("Before interchange x = %d and y = %d\n\n", x, y);
	
	interchange(&x, &y);
	
	printf("After interchange x = %d and y = %d\n\n", x, y);
	
	
}
void interchange(int *p, int *q)
{
	int temp;
	
	temp = *p;
	*p = *q;
	*q = temp;
} 
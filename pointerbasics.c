#include <stdio.h>
void change(int*, float*, char*);
int main()
{

	int x;
	float y;
	char ch;
	
	x = 5;
	y = 3.14;
	ch = 'C';
	
	printf("x = %d\n\n", x);
	printf("y = %f\n\n", y);
	printf("ch = %c\n\n", ch);
	
	change(&x, &y, &ch);
	
	printf("x = %d\n\n", x);
	printf("y = %f\n\n", y);
	printf("ch = %c\n\n", ch);
	
	return 0;
	
}
void change(int *ptr1, float *ptr2, char *ptr3)
{
	*ptr1 = 10;
	*ptr2 = 9.8;
	*ptr3 = '$';
	
}
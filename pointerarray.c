#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, *ptr_x;
	float y, *ptr_y;
	char ch, *ptr_ch;
	
	x = 5;
	y = 3.14f;
	ch = 'A';
	
	ptr_x = &x;
	ptr_y = &y;
	ptr_ch = &ch;
	
	printf("Address of X = %u\n\n", &x);
	printf("Address of X = %u\n\n", ptr_x);
	printf("Address of Y = %u\n\n", &y);
	printf("Address of Y = %u\n\n", ptr_y);
	printf("Address of CH = %u\n\n", &ch);
	printf("Address of CH = %u\n\n", ptr_ch);
	
	
	ptr_x = ptr_x + 1;
	ptr_y = ptr_y + 1;
	ptr_ch = ptr_ch + 1;
	
	printf("%u\n\n", ptr_x);
	printf("%u\n\n", ptr_y);
	printf("%u\n\n", ptr_ch);
	
	return 0;
}
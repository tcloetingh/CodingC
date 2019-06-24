// Any integer is input through the keyboard. Write a C program to 
// print whether number entered is even number or odd number.

#include <stdio.h>

int main() {

int num, result;

printf("\n\n");

printf("Please enter any number\n\n");
scanf("%d", &num);

result = num % 2;

if(result == 0)
	printf("%d is an even number", num);
		else
			printf("%d is an odd number\n\n", num);
}

#include <stdio.h>

int main(){

int num;
int i = 2;

printf("\n\n");
printf("Enter any number\n\n");
scanf("%d", &num);

while(i < num - 1)
	{
		if(num % i == 0)
			{
				printf("The number is not prime\n\n");
				break;
			}
			i++;
		}
		
		if(i == num)
			printf("The number is prime\n\n");
}
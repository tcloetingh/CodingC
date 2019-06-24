#include <stdio.h>

int main() {

int year;

printf("\n\n");

printf("Enter any year\n\n");
scanf("%d", &year);

if(year % 4 == 0)
{
		if(year % 100 != 0)
		{
				printf("\n\nThe year %d is a leap year\n\n", year);
		}
		else
		{
				if(year % 400 == 0)
				{
					printf("\n\nThe year %d is a leap year\n\n", year);
				}
				else
		{
					printf("The year %d is not a leap year\n\n", year);
		}
	}
}
	else
	{	
		printf("The year %d is not a leap year\n\n", year);
	}
}

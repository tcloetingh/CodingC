#include <stdio.h>

int main() {

int year;

printf("\n");

printf("Enter any year\n\n");
scanf("%d", &year);

if((year % 4 == 0 && year % 100 != 0)||(year % 4 == 0 && year % 100 != 0 && year % 400 == 0))
		{
			printf("THe year %d is a leap year\n\n", year);
		}
		else
			{
			printf("The year %d is NOT a leap year\n\n", year);
			}
	}
	
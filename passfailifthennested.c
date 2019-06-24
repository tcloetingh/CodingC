#include <stdio.h>

int main() {

printf("\n");

int m1, m2, m3, m4, m5;

float average;

printf("Please enter the 5 test scores\n\n");
scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

average = (m1 + m2 + m3 + m4 + m5) / 5;

if(average >= 70)
{
	printf("\n\nYou made Honor Roll\n\n");
}
	else
		if(average >= 60)
	{
		printf("\n\nYou made First Class\n\n");
	}
		
		else
			if(average >= 50)
		{
			printf("\n\nYou made Second Class\n\n");
		}
			
			else
				if(average >= 40)
			{
				printf("\n\nYou barely passed the class, congrats\n\n");
			}
			
				else
				{
					printf("\n\nYou failed, try again\n\n");
				}
	}

#include <stdio.h>
char* isoddeven(int num);
int main()

{

int num; 

printf("\n\nThis is a program to determine odd or even");
printf("\n\nPlease enter any number\n\n");
scanf("%d", &num);


printf("\n\n Result: %s", isoddeven(num));

return 0;
}
char* isoddeven(int num)
{
	
	if(num % 2 == 0)
		{
			return "Your number is even\n\n";
		}
			else
				{
				return "Your number is odd\n\n";
				}
}
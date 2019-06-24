/* Three numbers are input through the keyboard. Write a function 
largest to determine which number is largest among 3 three numbers. */

#include <stdio.h>
int largestofthree(int num1, int num2, int num3);
int main()
{

int result, num1, num2, num3;

printf("\n\nThis is a program to determine largest of 3 numbers\n\n");
printf("Please enter 3 numbers\n\n");
scanf("%d %d %d", &num1, &num2, &num3);

result = largestofthree(num1, num2, num3);

printf("The largest of the numbers is %d\n\n", largestofthree(num1, num2, num3));

return 0;
}
	int largestofthree(int num1, int num2, int num3)
	
	{
	if(num1 > num2 && num1 > num3)
		{
		return num1;
		}
		if(num2 > num1 && num2 > num3)
			{
			return num2;
			}
				if(num3 > num1 && num3 > num2)
				
					return num3;
				}
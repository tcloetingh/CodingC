
/* Write a menu driven program to print result of various operations 
on two integers. Two integers would be entered by the user and then
 user should be given prompt to select operation of his choice to 
 perform on these two integers. The program should give output on 
 the basis of choice selected by the user.
For example if user enters 2 integers as 10 and 20 and asks for
 addition of two numbers then output should be 30. If he asks for
  multiplication of 2 integers then program should print 200 as 
  output and so on...
The program should run till user wishes...
The menu options could be like Enter 1 for addition, 2 for
 multiplication etc. */


#include <stdio.h>

int main()
{

int num1;
int num2;
int operation;

do{

printf("\n\nThis is a program to run arithmetic operations...\n\n");
printf("Enter two numbers\n\n");
scanf("%d", &num1);
scanf("%d", &num2);
printf("\n\nPlease enter operation type\n\nMultiplication press 1\nDivision press 2\n");
printf("Addition press 3\nSubtraction press 4\nPress 5 to quit\n\n");
scanf("%d", &operation);

switch(operation)
{
	case 1: 
	
		printf("%d", num1 * num2);
		break;
	
	case 2:
	
		printf("%d", num1 / num2);
		break;
	
	case 3:
	
		printf("%d", num1 + num2);
		break;
	
	case 4:
	
		printf("%d", num1 - num2);
		break;
	
  		} 
  	} while(operation != 5);
}

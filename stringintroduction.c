#include <stdio.h>
#include <string.h>
int main()
{

	int roll_num;
	float percentage;
	char grade;
	char name[80];
	
	
	printf("Enter roll number of the student\t");
	scanf("%d", &roll_num);
	printf("Enter name of the student\t");
	gets(name);
	printf("Enter percentage scores of the student\t");
	scanf("%f", &percentage);
	printf("Enter letter grade obtained by the student\t");
	scanf(" %c", &grade);
	
	printf("\nRoll number = %d\n", roll_num);
	puts(name);
	printf("Percentage  = %0.2f\n", percentage);
	printf("Grade       = %c\n", grade);
	
	return 0;
	
}
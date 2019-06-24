#include <stdio.h>

int main(){

int basicSalary;
float hra, conveyance, ma;
float grossSalary;

printf("\n");

printf("Enter Basic Salary of Employee\t");
scanf("%d", &basicSalary);

if(basicSalary < 2000)
	{
		hra = basicSalary * 0.30;
		conveyance = basicSalary * 0.25;
		ma = basicSalary * 0.10;
		
		}
	else
		{
			hra = basicSalary * 0.40;
			conveyance = basicSalary * 0.15;
			ma = 500;
		
			}
			
		grossSalary = basicSalary + hra + conveyance + ma;
		
		printf("Gross Salary = %10.2f\n", grossSalary);
	}
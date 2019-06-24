#include <stdio.h>
#include <stdlib.h>
int main()
{
	int marks[5];
	int total = 0;
	int i;
	float percentage;
	
	for(i=0; i<=4; i++)
	{
		printf("Enter Marks of student\n\n");
		scanf("%d", &marks[i]);
	}
	
	for(i=0; i<=4; i++)
	{
		total = total + marks[i];
	}
	 
	percentage = total/5;
	
	printf("\n\nTotal Score = %d", total);
	printf("\n\nAverage Score = %f\n\n", percentage);
	
	return 0;
	
}
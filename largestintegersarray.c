///Write a C program to find largest 2 numbers in a given array. ///

#include <stdio.h>
int main()
{

int array[10]; 
int size, i, largest; 

	printf("\n\nEnter the size of the array (less than 10)\n\n");
	scanf("%d", &size);
	
	printf("Enter the elements of the array\n\n");
	
	for(i = 0; i < size; i++)
	{
		scanf("%d", &array[i]);
		
		largest = array[0];
	}
		
	for(i = 1; i < size; i++)
	{
		if(largest < array[i])
			largest = array[i];
	}
	
	printf("\n\nThe largest element in the array is %d", largest);
	
	return 0;
}
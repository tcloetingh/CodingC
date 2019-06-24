/* #include <stdio.h>
int main()
{
	int marks[5] = {67, 68, 73, 69, 70};
	int i, total = 0; 
	int *ptr;
	
	ptr = &marks[0];
	
	for(i = 1; i <= 5; i++)
		{
			total = total + *ptr;
			ptr = ptr + 1;
		}
		
		printf("\n\nTotal = %d\n\n", total);
		

}
*/
///written as a function///

#include <stdio.h>
int totalmarks(int *);
int main()
{
	int marks[5] = {67, 68, 77, 69, 70};
	int i, total; 
	
	total = totalmarks(marks);
	
	printf("\n\nTotal = %d\n\n", total);
	
	return 0;
	
}
int totalmarks(int *ptr)
{
	int total = 0;
	int i;
	for(i = 1; i <= 5; i++)
		{
			total = total + *ptr;
			ptr++;
		}
	return total;		

}
//Write a C program to put even and odd numbers of an array
 //in two different arrays. 
 
 #include <stdio.h>
 int main()
 {
 
 int i, j = 0, k = 0, n;
 int ray[10] = {1,2,3,4,5,6,7,8,9,10};
 int rayeven[5];
 int rayodd[5];
 
 	for(i = 0; i < 10; i++)
 	{
 		if (ray[i] % 2 == 0)
 		{
 			rayeven[j] = ray[i];
 			j++;
 		}
 		else
 		{
 			rayodd[k] = ray[i];
 			k++;
 		}
 	}
 	
 		printf("\nThe elements of odd array are\n");
 		for(i = 0; i < k; i++)
 		{
 			printf("%d\n", rayodd[i]);
 		}
 		printf("\nThe elements of even array are\n");
 		for(i = 0; i < j; i++)
 		{
 			printf("%d\n", rayeven[i]);
 		}
 	}
#include <stdio.h>
int main()
{
/// inputing and displaying array
	int ray[10];
	int i, j, n, m, temp, key, pos;
	
	printf("\nEnter how many elements(must be less than 10\n\n");
	scanf("%d", &n);
	printf("\nEnter the elements\n\n");
	
	for(i = 0; i < n; i++)
	{
		scanf("%d", &ray[i]);
	}
	
	printf("\nYour array elements are\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", ray[i]);
	}

	
/// sorting the array
	for(i = 0; i < n; i++)
	{									//
		for(j = i + 1; j < n; j++)
		{
			if(ray[i] > ray[j])
			{
				temp = ray[i];
				ray[i] = ray[j];
				ray[j] = temp;
			}
		}
	}
/// displaying sorted array	
	printf("Sorted list is\n");
	for(i = 0; i < n; i++)
	{
		printf("%d\n", ray[i]);
	}

/// insert new element into a specified position

	printf("Please enter new element to be inserted\n");
	scanf("%d", &key);
		
		for (i = 0; i < n; i++)
		{
			if (key < ray[i])
			{
				pos = i;
				break;
			}
			if (key > ray[n-1])
			{
				pos = n;
				break;
			}
		}
		if (pos != n)
		{
			m = n - pos + 1;
			for (i = 0; i <= m; i++)
			{
				ray[n - i + 2] =ray[n - i + 1];
			}
		}
		
		ray[pos] = key;
		
		printf("Final element list is\n");
		for(i = 0; i < n + 1; i++)
		{
			printf("%d\n", ray[i]);
		}
}

























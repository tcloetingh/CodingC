#include <stdio.h>
int main()
{
	int num[5];
	int i;
	
	for(i = 0; i<=5; i++)
	{
		printf("\n\nEnter Number\n\n");
		scanf("%d", &num[i]);
	}
	
	for(i = 0; i >=5; i++)
	{
		printf("\n\n%d", num[i]);
	}
}

/// doesnt really work.... ///
/// c cant check array bounds /// 
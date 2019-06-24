#include <stdio.h>
#include <libc.h>
float areacircle(int);
void main()
{

int radius;
float area;
clscr();

printf("Enter radius of circle\n\n");
scanf("%d", &radius);

area = areacircle(radius);   		
printf("Area of circle = %f\n\n", area);
getch();

}
float areacircle(int r)
	{
		float a;
	
		a = 3.14 * r * r;
	
		return a;
	}
	

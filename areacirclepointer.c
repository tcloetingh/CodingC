#include <stdio.h>
void reccircle(int,int,int,int*,int*,float*,float*);
int main()
{
	int height, width, radius;
	int recarea, recperim;
	float circlearea, circlecircum;
	
	printf("\n\nEnter height of your rectangle\n\n");
	scanf("%d", &height);
	printf("Enter width of your rectangle\n\n");
	scanf("%d", &width);
	printf("Enter the radius of a circle\n\n");
	scanf("%d", &radius);
	
	reccircle(height, width, radius, &recarea, &recperim, &circlearea, &circlecircum);
	
	printf("\n\nArea of rectangle = %d\n\n", recarea);
	printf("Perimeter of rectangle = %d\n\n", recperim);
	printf("Area of circle = %0.2f\n\n", circlearea);
	printf("Circumference of circle = %0.2f\n\n", circlecircum);
	
	return 0;
}
void reccircle(int h, int w, int r, int *ptr_ra, int *ptr_rp, float *ptr_ca, float *ptr_cc)
{
	*ptr_ra = h * w;
	*ptr_rp = 2 * h + 2 * w;
	*ptr_ca = 3.14 * r * r;
	*ptr_cc = 2 * 3.14 * r;
}

// no need to return values as they are now stored in variables in the main function
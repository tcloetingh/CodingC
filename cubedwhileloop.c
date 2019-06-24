//program to find the cube of 10 numberstgfgf

#include <stdio.h>

int main(){

int num, cube;
int i;				// counter variable for while loop

i = 1			

while(i <= 10) {				// condition

printf("Enter number\n\n");
scanf("%d", &num);

cube = num * num * num;

printf("Cube of %d is %d\n\n", num, cube);	

i = i + 1;				// counter increment

}


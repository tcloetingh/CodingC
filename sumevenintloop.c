
//Write a C program to print sum of 
//odd positive integers up to 75...

#include <stdio.h>

int main(){

int i;
int sum = 0;

printf("\n\nSumming every odd number between 0 and 75\n\n");

for(i = 1; i <= 75; i++) {

	if(i % 2 != 0) {
		sum += i;
		}
	}
		printf("%d\n\n", sum);
}

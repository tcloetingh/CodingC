#include <stdio.h>

int main() {

int x, y;
int max;

printf("\n");

printf("Enter first number\n\n");
scanf("%d", &x);

printf("Enter second number\n\n");
scanf("%d", &y);

max = x > y ? x : y;

printf("%d is largest\n\n", max);

}


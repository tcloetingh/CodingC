#include <stdio.h>

int main(){

char letter;

printf("\n\n");

printf("Please enter any character on the keyboard");
scanf("%c", &letter);

if(letter >= 32 && letter <=47) {
	printf("%c is a special character", letter);
	}
		else if(letter >= 48 && letter <= 57) {
			printf("%c is a number", letter);
			}
				else if(letter >= 97 && letter <= 122) {
					printf("%c is a lower case letter", letter);
					}
	}
		
#include <stdio.h>

int main()
{

char ch; 

printf("Enter any alphabet letter\n\n"); 
scanf("%c", &ch);

switch(ch)
{
	case ('a'||'A') :
		printf("It is a vowel\n\n");
		break;
	case ('e'&'E') :
		printf("It is a vowel\n\n");
		break;
	case ('i'&'I') :
		printf("It is a vowel\n\n");
		break;
	case ('o'&'O') :
		printf("It is a vowel\n\n");
		break;
	case ('u'&'U') :
		printf("It is a vowel\n\n");
		break;
	default :
		printf("It is a consonant\n\n");
		break;
	}
}
#include <stdio.h>

int main(){

int dayOfTheWeek;

printf("\n\nEnter day of the week with 1 starting from Monday\n\n");
scanf("%d", &dayOfTheWeek);

switch(dayOfTheWeek)
{
	case 1 :
			printf("it's Monday\n\n");
			break;
	case 2 : 
			printf("It's Tuesday\n\n");
			break;
	case 3 :
			printf("It's Wednesday\n\n");
			break;
	case 4 :
			printf("It's Thursday\n\n");
			break;
	case 5 :
			printf("It's Friday\n\n");
			break;
	case 6 :
			printf("It's Saturday\n\n");
			break;
	case 7 :
			printf("It;s Sunday\n\n");
			break;
	
	default :
			printf("oops you entered a wrong number\n\n");
			break;
	}
}

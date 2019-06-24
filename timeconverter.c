#include <stdio.h>

int main(){

int sec;
int s, mins, hrs, days;

printf("\n\n");

printf("Enter time in seconds\n\n");
scanf("%d", &sec);

hrs = (sec / 3600);
mins = (sec - (3600*hrs))/60;
s = (sec - (3600*hrs) - (mins*60));

printf("\n\n%d:%d:%d\n\n", hrs, mins, s);
	
}
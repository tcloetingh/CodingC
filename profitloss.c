// If cost and selling price of a particular item is input through the keyboard
//, write a C program to determine whether a trader has made a profit or loss
//. Also print how much loss he has incurred or profit he has earned

// MY LOGIC : ask for price, ask for cost


#include <stdio.h>

int main() {

float cost, selling, profit;
float revenue, loss;

printf("\n\n");

printf("Please enter the cost of item\n\n");
scanf("%f", &cost);

printf("Please enter the selling price\n\n");
scanf("%f", &selling);

revenue = selling - cost;
loss = cost - selling;

// profit = revenue > cost ? revenue : cost;

if(cost > selling)
	printf("\n\nMy guy you took a huge L and lost $%.2f\n\n", loss);
	
	if(selling > cost)
		printf("\n\nCongrats my dude you made $%.2f\n\n", revenue);



}


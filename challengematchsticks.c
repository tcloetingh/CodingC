/* Game Challenge
Write a C program for a match-stick game between the computer and a user. Being a programmer you should ensure and write a code in such a way that computer always wins. Rules for the game are as follows:

There are 21 match sticks. 
The computer asks the player to pick 1, 2, 3 or 4 match-sticks
After the player picks, the computer does it picking
Whoever is forced to pick up the last match-stick loses the game*/


#include <stdio.h>

int main(){

int x, y;

x = 3;
y = x++ + x++;

printf("x = %d\ny = %d\n", x, y);

}



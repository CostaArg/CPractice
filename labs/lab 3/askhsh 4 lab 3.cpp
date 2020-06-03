#include <stdio.h>
int main() {
float sell;
char name[40];
int bonus;

printf("Enter the name of the seller : ");
scanf("%s", name);

printf("Enter the amount of sellings : ");
scanf("%f", &sell);

	if (sell>2000)
		bonus=100;
	else
		bonus = 0;

sell = sell + bonus;

printf("You are %s and you earned %3.2f", name, sell);

	return 0;
}



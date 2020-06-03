#include <stdio.h>
int main() {
	float dollar, euro, bank;
	
	printf("Enter your currency in euro : ");
	scanf("%f",&euro);
	dollar = (euro * 1.1);
	bank = (dollar - 2*dollar/100);
	printf("You have %3.2f dollars: ", bank);
	
	return 0;
}

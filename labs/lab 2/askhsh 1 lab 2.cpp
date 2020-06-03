#include <stdio.h>
int main() {
	float dollar, euro;
	
	printf("Enter your currency in euro : ");
	scanf("%f",&euro);
	dollar = (euro * 1.1);
	printf("You have %3.2f dollars: ", dollar);
	
	return 0;
}

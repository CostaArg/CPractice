#include <stdio.h>

int main () {
	int num1, num2;

	printf("Enter a number : ");
	scanf("%d", &num1);

	do {

		printf("Enter a second number : ");
		scanf("%d", &num2);

	} while (!num2>num1);		

	if ( (num1 % num2) == 0)
		printf("The number %d is a %d multiplier", num1, num2);
	else
		printf("The number %d is not a %d multiplier", num1, num2);

	return 0;
}

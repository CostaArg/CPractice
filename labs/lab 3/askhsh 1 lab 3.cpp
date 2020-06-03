#include <stdio.h>
#include <stdlib.h>
int main() {
int first, second, dif;

	printf("Enter the first number : ");
	scanf("%d", &first);
	printf("Enter the second number: ");
	scanf("%d", &second);

	dif= abs(first-second);
	printf("The difference is: %d", dif);
	return 0;
}

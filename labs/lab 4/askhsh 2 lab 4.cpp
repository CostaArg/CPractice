#include <stdio.h>

int main () {
	int num;

	printf("Enter a number : ");
	scanf("%d", &num);

	if ( (num % 7) == 0)
		printf("The number %d is a 7 multiplier", num);
	else
		printf("The number %d is not a 7 multiplier", num);

	return 0;
}

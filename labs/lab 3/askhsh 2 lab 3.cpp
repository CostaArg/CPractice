#include <stdio.h>
int main() {
int numb;

	printf("Enter a number : ");
	scanf("%d", &numb);

	if (numb % 2 == 0)
		printf("The number is even");

	else
		printf("The number is odd");

	return 0;
}

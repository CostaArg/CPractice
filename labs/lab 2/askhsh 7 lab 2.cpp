#include <stdio.h>
int main() {
int D,d, upoloipo, phliko;

	printf("Enter the first number: ");
	scanf("%d", &D);
	printf("Enter the second number : ");
	scanf("%d", &d);

	upoloipo = D % d;
	phliko = D / d;

	printf("%d=%d*%d+%d\n", D, d, phliko, upoloipo);
	return 0;
}

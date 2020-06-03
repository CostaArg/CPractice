#include <stdio.h>

int main() {
	int num=0, num1=0, num2=0, time=0, sma=0, big=0, bet=0;

	printf("Enter the first number : ");
	scanf("%d", &num1);

	do {
		(time > 0) ? printf("Please re-e") : printf("E");
		printf("nter the second number : ");
		scanf("%d", &num2);
		time++;
	} while (num2 >= num1);

	do {
		printf("Enter a number : ");
		scanf("%d", &num);

		if ( (num != 0) && (num < num1) )
			sma++;

		if ( (num != 0) && (num > num2) )
			big++;

		if ( (num != 0) && (num > num2) && (num < num1) )
			bet++;

	} while (num != 0);

	printf("There are %d numbers smaller than A\n", sma);
	printf("There are %d numbers bigger than B\n", big);
	printf("There are %d numbers in between A and B", bet);

	return 0;
}

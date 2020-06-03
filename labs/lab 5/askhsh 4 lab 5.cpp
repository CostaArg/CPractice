#include <stdio.h>

int main() {
	int amount=0, num=0, sum=0, i;

	printf("Enter the amount of numbers you want to add : ");
	scanf("%d", &amount);
	
	for (i=0; i<amount; i++) {

		printf("Enter a number : ");
		scanf("%d", &num);
	
		sum += num;

}

printf("The sum is : %d", sum);

	return 0;
}

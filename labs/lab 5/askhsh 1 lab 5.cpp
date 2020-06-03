#include <stdio.h>

int main() {
	int num, sum=0, pop=0;


do {

	printf("Enter an integer number : ");
	scanf("%d", &num);
	
	sum += num;
	pop++;
	
} while (sum<1000);

printf("You have entered %d numbers", pop);

	return 0;
}

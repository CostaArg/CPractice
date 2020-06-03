#include <stdio.h>

int main() {
	int i=0, j=0, amount=0;
	char sym=0;

do {
	
	printf("Enter the amount of stars you want the square to be : ");
	scanf("%d", &amount);

	while ( getchar() != '\n');

	printf("Give the character you want to have the square : ");
	scanf("%c", &sym);

	for (i=0; i<amount; i++) {
		
		for (j=0; j<amount; j++) 
			printf("%c", sym);
		printf("\n");
		
	}		
	
} while (amount < 2 || amount>11);

	return 0;
}

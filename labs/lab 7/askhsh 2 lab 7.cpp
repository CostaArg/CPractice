#include <stdio.h>

int getStarNumber();
void drawStarSquare(int);

int main() {
	
	int stars;

	stars = getStarNumber();
	drawStarSquare( stars );

	return 0;
}	

int  getStarNumber() {
	int amount;

	do {
		printf("Enter the amount of stars you want the square to be : ");
		scanf("%d", &amount);
	} while ( amount < 2 || amount>11 );

	return amount;
}

void drawStarSquare(int amount) {
	int i,j;

	for (i=0; i<amount; i++) {
			for (j=0; j<amount; j++) 
			printf("*");
		printf("\n");
	}
}

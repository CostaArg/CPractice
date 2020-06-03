#include <stdio.h>

int getXarNumber();
void drawXarSquare(int, char);
char getXar();

int main() {
	int amount;
	char xar;

	xar = getXar();
	amount = getXarNumber();
	drawXarSquare(amount, xar);

}	

char getXar() {
	char xar;

	printf("Enter the character you want to print : ");
	scanf("%c", &xar);

return xar;
}

int  getXarNumber() {
	int amount;

	do {
		printf("Enter the amount of stars you want the square to be : ");
		scanf("%d", &amount);
	} while ( amount < 2 || amount>11 );

	return amount;
}

void drawXarSquare(int amount, char xar) {
	int i,j;

	for (i=0; i<amount; i++) {
			for (j=0; j<amount; j++) 
			printf("%c", xar);
		printf("\n");
	}
}

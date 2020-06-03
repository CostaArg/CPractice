#include <stdio.h>

int main() {
	int i=0, j=0, amount=0;
	char char1, char2;
	
	printf("Enter the amount of rows you want the square to be : ");
	scanf("%d", &amount);
		while(getchar() != '\n');
	printf("Give me the first character : ");
	scanf("%c", &char1);
		while(getchar() != '\n');
	printf("Give me the second character : ");
	scanf("%c", &char2);
		while(getchar() != '\n');

	for (i=0; i<amount; i++) {
		
		for (j=0; j<amount; j++)

			if ( ( (i+j) % 2) == 0 )
				printf("%c", char1);
			else
				printf("%c", char2);

		printf("\n");
		
	}		
	


	return 0;
}

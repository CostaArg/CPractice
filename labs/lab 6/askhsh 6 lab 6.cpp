#include <stdio.h>

int main() {
	int i=0, j=0, amount=0;
	
	printf("Enter the amount of stars you want the square to be : ");
	scanf("%d", &amount);

	for (i=0; i<amount; i++) {
		
		for (j=0; j<amount; j++)

			if ( ( (i+j) % 2) == 0 )
				printf("%c", 219);
			else
				printf(" ");

		printf("\n");
		
	}		
	


	return 0;
}

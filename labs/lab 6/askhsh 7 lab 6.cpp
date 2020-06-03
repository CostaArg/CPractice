#include <stdio.h>

int main() {
	int i=0, j=0, amount=8, amount2=0, vertical=0;
	char horizontical;

	printf("Enter i : ");
	scanf("%d", &vertical);
	printf("Enter j : ");
	scanf("%c", &horizontical);
	
	for (i=7; i>=amount2; i--) {
		
		for (j=0; j<amount; j++)

			if (i==vertical-1 && j==horizontical-1)
				printf("+");
			else
				if ( ( (i+j) % 2) == 0 )
					printf("%c", 219);
				else
					printf(" ");


		printf("\n");
		
	}		

	return 0;
}

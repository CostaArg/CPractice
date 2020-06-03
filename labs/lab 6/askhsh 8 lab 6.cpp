#include <stdio.h>
#define PIN 1234

int main() {
	int guess=0, tries=0;

	do {
		printf("Enter your PIN: ");
		scanf("%d", &guess);

		if (guess!=PIN)		{

			tries= (tries + 1);
			printf("You have %d tries left\n", 3-tries);
		}


	}
	while (tries<3 && guess!=PIN);

	if (guess==PIN)
		printf("Access Granted\n");
	else			
		printf("Access Denied\n");
	
	
	return 0;
}

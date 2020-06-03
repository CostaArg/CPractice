#include <stdio.h>
int main() {
	float mikrhb, megalhb, upsos, embadon;
		printf("Give the big side: ");
		scanf("%f", &megalhb);
		printf("Give the short side: ");
		scanf("%f", &mikrhb);
		printf("Enter the height: ");
		scanf("%f", &upsos);

	embadon = ( (megalhb + mikrhb) * upsos ) /2;

	printf("The surface area is: %3.2f", embadon);

	return 0;
}

#include <stdio.h>
#include <math.h>
#define pi 3.14159
int main() {
	float aktina, upsos, ogkos;
		printf("Give the radius: ");
		scanf("%f", &aktina);
		printf("Enter the height : ");
		scanf("%f", &upsos);
	

	aktina = pow(aktina,2);
	ogkos = pi*aktina*upsos;
	printf("The volume is: %3.2f", ogkos);

	return 0;
}

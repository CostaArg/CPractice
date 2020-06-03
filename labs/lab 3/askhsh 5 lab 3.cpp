#include <stdio.h>
int main() {
float temp1, temp2, temp3, avg, Cel;
int kalorifer;

printf("Enter the temperature in F of the first room : ");
scanf("%f", &temp1);
printf("Enter the temperature in F of the second room : ");
scanf("%f", &temp2);
printf("Enter the temperature in F of the third room : ");
scanf("%f", &temp3);

avg = ( (temp1 + temp2 + temp3) /3 );

Cel = ( (avg - 32) * 5/9 );

	if ( avg < (13*Cel) )
		kalorifer = 1;
	else
		kalorifer = 0;

	if (kalorifer = 1)
		printf ("YES");
	else
		printf ("NO");

	return 0;
}

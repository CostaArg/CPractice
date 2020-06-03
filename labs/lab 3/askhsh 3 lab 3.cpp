#include <stdio.h>
int main() {
float firstgra, secogra, thigra, wriexa, avg;

	printf("Enter the first oral grade : ");
	scanf("%f", &firstgra);
	printf("Enter the second oral grade : ");
	scanf("%f", &secogra);
	printf("Enter the third oral grade : ");
	scanf("%f", &thigra);
    printf("Enter the grade of your written exams : ");
	scanf("%f", &wriexa);

	avg = ( firstgra + secogra + thigra + wriexa + wriexa) /5;

	printf("The average grade is : %3.2f", avg);

	if (avg>=10)
		printf("	You passed");
	else
		printf("	You failed");

	return 0;
}

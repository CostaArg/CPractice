#include <stdio.h>
int main() {
	int num1, num2, num3;
	float avg;
	
	printf("Enter the first number : ");
	scanf("%d",&num1);
	printf("Enter the second number : ");
	scanf("%d",&num2);
	printf("Enter the third number : ");
	scanf("%d",&num3);
	
	avg = (float) (num1+num2+num3)/3;
	printf("The average number is: %3.2f", avg);
	
	return 0;
}

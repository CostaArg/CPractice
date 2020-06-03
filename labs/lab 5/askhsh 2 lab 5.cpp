#include <stdio.h>
#include <math.h>

int main() {
	int num, sum=0, sq=0, cu=0, sum_sq=0, sum_cu=0;


do {

	printf("Enter an integer number : ");
	scanf("%d", &num);
	
	sum += num;
	sq = pow (num,2);
	sum_sq += sq;
	cu = pow (num,3);
	sum_cu += cu;	
	
} while (num != 0);

printf("The sum is : %d\n", sum);
printf("The sum of squares are : %d\n", sum_sq);
printf("The sum of cubes are : %d", sum_cu);

	return 0;
}

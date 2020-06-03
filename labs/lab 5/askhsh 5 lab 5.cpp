#include <stdio.h>

int main() {
	int num=0, i, max=0;

	for (i=0; i<10; i++) {

	printf("Enter a number : ", num);
	scanf("%d", &num);


	if (num>max)
		max= num;

}

printf("The biggest number is : %d", max);

	return 0;
}

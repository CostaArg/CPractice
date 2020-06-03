#include <stdio.h>

int main() {
	int num=0, i, pos=0;

	for (i=0; i<100; i++) {

	printf("Enter a number : ", num);
	scanf("%d", &num);


	if (num>0)
		pos++;

}

printf("You have entered %d positive numbers", pos);

	return 0;
}

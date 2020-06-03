#include <stdio.h>

int main() {
	int num=0;

do {

	if (num==0) {
		printf ("%d\n", num);
		num = (num +2);
}
	else
{
		num = (num + 2);
		printf ("%d\n", num);
}
	
} while (num < 100);

	return 0;
}

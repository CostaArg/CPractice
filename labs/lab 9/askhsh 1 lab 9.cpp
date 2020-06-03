#include <stdio.h>
int main() {
	int a=10,b=20, *ptr1, *ptr2;

	
		printf("%3d - %3d - %p - %p\n", a, b, ptr1, ptr2);
		
		printf("%3d - %3d - %p - %p\n", a, b, &a, &b);

		ptr1 = &a;
		ptr2 = &b;
		
		printf("%3d - %3d - %p - %p\n", a, b, ptr1, ptr2);

		*ptr1 = 50;
		*ptr2 = 60;

		printf("%3d - %3d - %p - %p\n", *ptr1, *ptr2, ptr1, ptr2);
		printf("%3d - %3d - %p - %p\n", a, b, ptr1, ptr2);
		

	return 0;
}

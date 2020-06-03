#include <stdio.h>

int main() {
	float mil=0, greece=0, count=0;

	mil = 1000000;
	greece = (11*mil);

	do {

		greece = ( greece + ( (3/100.0) * greece) );
		count++;

	} while (greece < 12*mil);

	printf("It will take %1.0f years for Greece to reach 12 million people", count);

	return 0;
}

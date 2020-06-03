#include <stdio.h>

int main() {
	int yard,foot,inch,meter,mm,ffoot,finch;

	printf("Give a distance to convert : ");
	scanf("%d",&meter);
	mm = meter * 1000;
	inch = mm / 25.4;
	foot = inch / 12;
	yard = inch / 36;
	ffoot = (inch-(yard*36)) / 12;
	finch = inch-(yard*36)-(ffoot*12);
	
		printf("The distance is: %d Yards %d Foot %d Inches",yard,ffoot,finch);
	
	return 0;
}

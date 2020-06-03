#include <stdio.h>

int main() {

	int day, i, j, whichmonth=1, year;
	int meres[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

	 char *month[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December" };

do {

	printf("Enter which day is the first day of the month : ");
	scanf("%d", &day);

} while (day<1 || day>7);



do {
	printf("Enter the year : ");
	scanf("%d", &year);

} while (year<1000 || year>2100);

	if ( (year % 4==0) && (year % 100==0) && (year % 400==0) )
		meres[1]=29;

for (j=0; j<12; j++){

	printf("\n\n--------------------------------\n");
	printf("     %s\n", month[whichmonth-1]);
	printf("--------------------------------\n");
	printf("M  T  W  T  F  S  S\n");


	for (i=1; i<meres[whichmonth-1]+day; i++) {
		if ( i < day )
			printf("   ");
		else {
			printf("%2d ", i-day+1);
			if (i % 7== 0)
				printf("\n");
		}
	}	

	
	printf("\nold day=%d\n",day);
	printf("meres=%d\n",meres[whichmonth-1]);
	printf("meres to add=%d\n",(meres[whichmonth-1] %28));
	printf("new day=%d\n",(day + ((meres[whichmonth-1] %28))) % 7);

	day = (day + ((meres[whichmonth-1] %28))) % 7;

	if (day==0)
			day=7;

	whichmonth++;
	printf("press any key to continue...");
	getchar();
}

	return 0;
}

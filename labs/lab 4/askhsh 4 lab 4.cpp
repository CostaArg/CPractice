#include <stdio.h>

int main() {
	int day,month,year,lang;
	
	do{
		printf("Enter day : ");
		scanf("%d",&day);
	}while (day<0 || day>31);
	
	do{
		printf("Enter month : ");
		scanf("%d",&month);
	}while (month<0 || month>12);

	do{
		printf("Enter year : ");
		scanf("%d",&year);
	}while (year<0 || year>2500);

	printf("Press 1 for Greek or 2 for English : ");
	scanf("%d",&lang);
	printf("%d / ",day);
	

switch(month) {
	case 1 : (lang == 1 ) ?  printf("Ianouariou / ") : printf("January / ");
		break;
	case 2 : (lang == 1 ) ?  printf("Fevrouariou / ") : printf("February / ");
		break;		
	case 3 : (lang == 1 ) ?  printf("Martiou / ") : printf("March / ");
		break;
	case 4 : (lang == 1 ) ?  printf("Apriliou / ") : printf("April / ");
		break;
	case 5 : (lang == 1 ) ?  printf("Maiou / ") : printf("May / ");
		break;
	case 6 : (lang == 1 ) ?  printf("Iouniou / ") : printf("June / ");
		break;
	case 7 : (lang == 1 ) ?  printf("Iouliou / ") : printf("July / ");
		break;
	case 8 : (lang == 1 ) ?  printf("Augoustou / ") :  printf("August / ");
		break;
	case 9 : (lang == 1 ) ?  printf("Septemvriou / ") : printf("September / ");
		break;
	case 10 : (lang == 1 ) ?  printf("Oktomvriou / ") : printf("Octomber / ");
		break;
	case 11 : (lang == 1 ) ?  printf("Noemvriou / ") : printf("November / ");
		break;
	case 12 : (lang == 1 ) ?  printf("Dekemvriou / ") : printf("December / ");
		break;
}
		printf("%d",year);
}

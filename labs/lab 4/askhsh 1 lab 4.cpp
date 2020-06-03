#include <stdio.h>

int main () {
float grade;

do {

printf("Enter your grade : ");
scanf("%f", &grade);

} while (!grade<0 || grade>100);

if (grade>=80)
printf("Outstanding");
else if (grade>=70)
printf("Excellent");
else if (grade>=60)
printf("Very Good");
else if (grade>=50)
printf("Good");
else if (grade>=40)
printf("Moderate");
else if (grade>=30)
printf("Marginal Fail");
else
printf("Clear Fail");


return 0;
}

#include <stdio.h>

int getnum();
void reverse(int [],int);


int main(){
	int pinakas[10],i;


	for(i=0;i<10;i++)
		pinakas[i]=getnum();
	
	reverse(pinakas,10);
	
return 0;
}

int getnum(){
	
int stars;
	do {
		printf("Give the size of the square: ");
		scanf("%d",&stars);
	}while (stars <= 0 );
return stars;
}

void reverse(int pin[], int size) {

	int i;
	
	for(i=9;i>=0;i--)
		printf("pin[%2d]=%d\n",i,pin[i]);
}

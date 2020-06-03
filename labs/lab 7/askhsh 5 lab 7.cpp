#include <stdio.h>

int getnum();
void printtable(int [],int);


int main(){
	int pinakas[10],i;


	for(i=0;i<10;i++)
		pinakas[i]=getnum();
	
	printtable(pinakas,10);
	
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

void printtable(int pin[], int size) {

	int i;

	for(i=0;i<10;i++)
		printf("pin=%d\n",pin[i]);
}

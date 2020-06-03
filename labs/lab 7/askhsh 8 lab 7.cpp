#include <stdio.h>

int getnum();
void printtable(int [],int);
int biggest(int [],int);


int main(){
	int pinakas[10],i, max;


	for(i=0;i<10;i++)
		pinakas[i]=getnum();
	
	printtable(pinakas,10);
	max=biggest(pinakas, 10);

	printf("Max: %d", max);
	
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
		printf("pin[%2d]=%d\n",i,pin[i]);
}


int biggest(int pin[], int size){
	int i, max;

	max = pin[0];
	for(i=1;i<size;i++) 
		if ( (pin[i])>=max ) 
			max = pin[i];

	return max;
}

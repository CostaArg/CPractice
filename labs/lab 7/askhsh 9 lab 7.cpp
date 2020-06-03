#include <stdio.h>
#define SIZE 10

int getnum(char *);
void printtable(int [],int);
int find(int [], int, int);
void giveArray(int [],int);
int searchArray(int);
void place(int,int);

int main(){
	int pinakas[SIZE], i, search, where, save;

	
	giveArray(pinakas,SIZE);
	printtable(pinakas,SIZE);	
	search=searchArray(search);
	where=find(pinakas, SIZE, search);
	place(search,where);


	
return 0;
}

void giveArray(int pin[], int size) {
	int i; 
	for(i=0;i<size;i++)
		pin[i]=getnum("Give the element of the array: ");
}

int getnum(char *label) {
	
int stars;
	do {
		printf("%s",label);
		scanf("%d",&stars);
	} while (stars <= 0 );
return stars;
}

int find(int pin[], int size, int whichnum){

	int i, save=-1;

	for(i=0;i<size;i++)
		if ( (pin[i])==whichnum ) {
			save = i;
			break;
	}		

	return save;
}


void printtable(int pin[], int size) {

	int i;

	for(i=0;i<10;i++)
		printf("pin[%2d]=%d\n",i,pin[i]);
}

int searchArray(int search){
	
	printf("Give a number to search: ");
	scanf("%d", &search);	
return search;
}

void place(int search, int where){

	if (where == -1)
		printf("%d has not been found! \n",search);
	else
		printf("%d has been found! in position %d!\n",search,where);
}

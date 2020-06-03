#include <stdio.h>
int getStars();
void drawStar(int,char);
char getChar();
void callF();

int main(){
	
	
	callF();
}

char getChar(){
	char xar;

	printf("Give the character you want to print: ");
	scanf("%c",&xar);

	return xar;
}
int getStars(){
	int stars;

	do {
		printf("Give the size of the square: ");
		scanf("%d",&stars);
	}while (stars <= 2 || stars>11);
	return stars;
}

void drawStar(int stars, char xar){
	int i,j;
for (i=0; i<stars; i++) {
    for (j=0; j<stars; j++)

        printf("%c",xar);
        printf("\n");
}
}
void callF(){
int stars;
char xar;
	xar = getChar(); 
	stars = getStars();
	drawStar(stars,xar);

}

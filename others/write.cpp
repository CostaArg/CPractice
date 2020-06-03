#include <stdio.h>

int main(){

char filename[100];
FILE *fpointer;
int x;

printf("Enter the name of the file\n");
gets(filename);

fpointer = fopen(filename, "w");

   if (fpointer== NULL)
      printf("Cannot open file to write\n");
	else {
		printf("Enter something to write in the file : ");
		scanf("%d",&x);
		fprintf(fpointer,"%d",x);
		fclose(fpointer);
	}

   return 0;
}

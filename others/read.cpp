#include <stdio.h>

int main(){

char filename[100];
FILE *fpointer;
int x;

printf("Enter the name of the file : ");
gets(filename);

fpointer = fopen(filename, "r");

	if (fpointer==NULL)
      printf("Cannot open file to read\n");
		else
			while ( !feof(fpointer)) {
				fscanf(fpointer, "%d\n", &x);
				printf("%d\n", x);
			}
			fclose(fpointer);
	return 0;
}

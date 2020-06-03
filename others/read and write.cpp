#include <stdio.h>

int main(){

char source[100], target[100];
FILE *fpointer1, *fpointer2;
int x;

printf("Enter the name of the source file : ");
gets(source);

printf("Enter the name of the target file : ");
gets(target);

fpointer1 = fopen(source, "r");
fpointer2 = fopen(target, "w");

	if (fpointer1==NULL)
      printf("Cannot open file to read\n");
		else
			while ( !feof(fpointer1)) {
				fscanf(fpointer1, "%d\n", &x);
				fprintf(fpointer2, "%d\n", x);
			}
			fclose(fpointer1);

fclose(fpointer2);

	return 0;
}

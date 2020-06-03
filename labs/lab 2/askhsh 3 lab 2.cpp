#include <stdio.h>
#include <ctype.h>
int main() {
char letter;

	printf("Enter a capital letter: ");
	scanf("%c", &letter);

	letter = tolower (letter);
	printf("%c", letter);
	return 0;
}

#include <stdio.h>

int main () {

char symb[20];
int cap=0, low=0, etc=0,i;

	printf("Enter a string:");
	scanf("%s", symb);

	for (i=0; symb[i]!='\0'; i++)
		if (symb[i]>=65 && symb[i]<=90)
			cap= (cap + 1);
		else
			if (symb[i]>=97 && symb[i]<=122)
				low= (low + 1);
			else
				etc= (etc + 1);

printf("You entered %d capital letters\n", cap);
printf("You entered %d lowercase letters\n", low);
printf("You entered %d other characters\n", etc);
			

return 0;
}

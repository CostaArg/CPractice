//IST
//LSBU BSc CS
//Level 4
//Algorithms
//Konstantinos Argyropoulos

#include <stdio.h>
#define SIZE 20
#define LIMIT 1000

int main(){
int board[SIZE], method, temp, i, j, position, swap, board2[SIZE], sel_comp_counter=0, sel_swap_counter=0, bub_comp_counter=0, bub_swap_counter=0;

//User enters the elements

for (i=0; i<SIZE; i++)
	do {
		printf("Give the %d element : ", i+1);
		scanf("%d", &board[i]);
	} while ( (board[i]<0) || (board[i]>=LIMIT) );

//User selects a sorting method

do {
	printf("Press 1 for Bubble Sort, Press 2 for Selection Sort or Press 3 for both: ");
	scanf("%d", &method);
} while (method!=1 && method!=2 && method!=3);

//Copy the array

if (method==3)
	for (i=0; i<SIZE; i++) {
		board2[i] = board[i];
	}

//Bubble Sort starts here

if ( (method==1) || (method==3) ) {
	for (i=0; i<SIZE; i++) {
		for (j=SIZE-1; j>i; j--) {
			bub_comp_counter = (bub_comp_counter + 1);
				if (board[j]<board[j-1]) {
					bub_swap_counter = (bub_swap_counter + 1);
					temp = board[j];
					board[j] = board[j-1];
					board[j-1] = temp;
				}
		}
	}
}

//Selection Sort starts here

if (method==2) {
	for (i=0; i<(SIZE-1); i++) {
		position = i;
	for (j=i+1; j<SIZE; j++) {
		sel_comp_counter = (sel_comp_counter + 1);
			if (board[position]>board[j] )
				position = j;
	}
	if (position != i) {
		sel_swap_counter = (sel_swap_counter + 1);
		swap = board[i];
		board[i] = board[position];
		board[position] = swap;
	}
	}
}

//Method 3 array here

if (method==3) {

	for (i=0; i<(SIZE-1); i++) {
		position = i;
	for (j=i+1; j<SIZE; j++) {
		sel_comp_counter = (sel_comp_counter + 1);
			if (board2[position]>board2[j] )
				position = j;
	}
	if (position != i) {
		sel_swap_counter = (sel_swap_counter + 1);
		swap = board2[i];
        board2[i] = board2[position];
        board2[position] = swap;
	}
	}
}

//Arrays print here

if (method==1) {
	printf("Bubble Sort Results : \n");
		for(i=0; i<SIZE; i++) {
			printf("%d\n", board[i]);
		}
	printf("======================\n");
}

if (method==2) {
	printf("Bubble Sort Results : \n");
		for(i=0; i<SIZE; i++) {
			printf("%d\n", board[i]);
		}
	printf("======================\n");
}

if (method==3) {
	printf("Bubble Sort Results : \n");
		for(i=0; i<SIZE; i++) {
			printf("%d\n", board[i]);
		}
	printf("======================\n");
}


if (method==3) {
	printf("Selection Sort Results : \n");
		for(i=0; i<SIZE; i++) {
			printf("%d\n", board2[i]);
		}
	printf("======================\n");
}

//Statistics print here

if (method==1) {
	printf("The number of comparisons in bubble sort are : %d\n", bub_comp_counter);
	printf("The number of swaps in bubble sort are : %d\n", bub_swap_counter);
}
if (method==2) {
	printf("The number of comparisons in selection sort are : %d\n", sel_comp_counter);
	printf("The number of swaps in selection sort are : %d\n", sel_swap_counter);
}
if (method==3) {
	printf("The number of comparisons in bubble sort are : %d\n", bub_comp_counter);
	printf("The number of swaps in bubble sort are : %d\n", bub_swap_counter);
	printf("The number of comparisons in selection sort are : %d\n", sel_comp_counter);
	printf("The number of swaps in selection sort are : %d\n", sel_swap_counter);
}

}

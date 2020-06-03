// IST College
// LSBU TopUp Program. Level 4. Semester B.
// Week 4: Chess board Example.
// Prints a chess board and a pawn to a user specified square
// DevCpp Compiler
                                                
#include <stdio.h>
#include <stdlib.h>

#define EXIT_OK 0
#define WHITE 'W'
#define BLACK 'B'
#define PAWN 'P'

// Function Prototypes 
void printChessBoard(char, char);
void printPawnInChessBoard(char, int, char, char, char);
int readNumber( char[], int, int );
char readChar( char[], char, char );
int my_exit( int );

// Main Function
int main() {
    int row;
    char column;
    
    printChessBoard(WHITE, BLACK);
    row = readChar("Give ChessBoard Column : ", 'a', 'h');
    column = readNumber("Give ChessBoard Row : ", 0, 8);
    printPawnInChessBoard(row, column, PAWN, WHITE, BLACK);
    
    return my_exit( EXIT_OK );
    
} // end of main()

// Exit function. Freezes & exits
int my_exit( int exitCode ) {
     system("pause");
     return( exitCode );
} // end of my_exit()

// Returns a number within low & upper boundaries
int readNumber( char label[], int low, int upper ) {
    int num, errorCounter=0;;
    do {
       if ( errorCounter )
          printf("Wrong Input. Please retry. ");
       printf("%s", label );
       scanf("%d",&num);
       errorCounter++;
    }   
    while ( !((num >= low) && (num<=upper)) );
    return num;
} // end of readNumber()
 
// Returns a char within low & upper boundaries
char readChar( char label[], char low, char upper ) {
    char ch, errorCounter=0;;
    do {
       if ( errorCounter )
          printf("Wrong Input. Please retry. ");
       printf("%s", label );
       while ( (ch = getchar()) == '\n')
             ;
       errorCounter++;
    }   
    while ( !((ch >= low) && (ch<=upper)) );
    return ch;
} // end of readChar() 
 
// Prints a Chess Board
void printChessBoard( char white, char black) {
     int i, j;
     
     for ( i=0; i<8; i++ ) {
         printf("%1d. ",8-i);
         for ( j=0; j<8; j++)
             if ( ((i+j)%2) == 0 )
                putchar(white);
             else
                 putchar(black);
         putchar('\n');
         }
     
     printf("%3c",' ');
     for( i=0; i<8; i++ ) 
          putchar('a'+i);
     putchar('\n');
} // end of printChessBoard()                

// Prints a Pawn in Chess Board
void printPawnInChessBoard(char pawnrow, int pawncolumn, char pawn, char white, char black) {
     int i, j;
     int pawni, pawnj;
     
     pawni = 8 - pawncolumn;
     pawnj = (int)(pawnrow - 'a');
     
     for ( i=0; i<8; i++ ) {
         printf("%1d. ",8-i);
         for ( j=0; j<8; j++)
             if ( (i==pawni) && (j==pawnj) )
                putchar( pawn );
             else
                 if ( ((i+j)%2) == 0 )
                    putchar(white);
                 else
                     putchar(black);
         putchar('\n');
         }
     
     printf("%3c",' ');
     for( i=0; i<8; i++ ) 
          putchar('a'+i);
     putchar('\n');
} // end of printPawnInChessBoard  

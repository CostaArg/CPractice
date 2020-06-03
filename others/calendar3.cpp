// IST College
// LSBU TopUp Program. Level 4. Semester B.
// Week 6 Print a calendar sample program.
// Prints a calendar given the year and the 1st day of the year
// DevCpp Compiler
#include <stdio.h>
#include <stdlib.h>

// Global Data Types


// Function Prototypes
void printMonth(int, int*, int);
int InputInt( char[], int, int);
void printYear(int, int);
int leapYear(int);
    
int main() {
    int year,day;
    
    year = InputInt("Give the year [1-2500] : ",1,2500);
    
    day = InputInt("Give the 1st of the year [1-7] [1 for Mon, 2 for Tue, 7 for Sun : ",1,7); 
    printYear(year,day);
    
    system("pause");
    return 0;
}

// Prints a the annual calendar given the year and the 1st day of the year
// Invokes PrintMonth() 12 times in a loop
void printYear(int whichYear, int firstDay) {
     int i;
     for (i=1;i<=12;i++)
          printMonth(i,&firstDay,whichYear);
}
     
// Prints the calendar of a month given the month and the 1st day of the month
// Before exiting the firstDay variable hold the starting day of the next month 
void printMonth(int whichMonth, int *firstDay, int year) {
     int i,j;
     int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
     char *month[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
     char day[]={'M','T','W','T','F','S','S'};
     
     printf("\n%12s\n",month[whichMonth-1]); 
     for (i=0;i<7;i++)                        
         printf("%3c",day[i]);
     printf("\n");
     
     // prints preceding spaces                                       
     for (i= 1 ; i<=(*firstDay)-1; i++)        
         printf("%3c",' ');
     
     
     if ( whichMonth == 2 ) 
        days[1] += leapYear( year );  // february has 28 or 29
        
     // the loop is executed so many times as the days of the month.
     for (i=*firstDay; i<(*firstDay+days[whichMonth-1]); i++) {
         printf("%3d",i-(*firstDay-1));
         if ( (i%7)==0 )
            printf("\n");
     }
     printf("\n");
     *firstDay = (i % 7); // firstDay now has the starting day of the next month
}         
    
// Give a number within boundaries
int InputInt( char label[], int low, int upper) {
      int localInput;
      int errorCounter = 0;
      
      do {
         if ( errorCounter )
            printf("Wrong Input. Give a number in the range [%6.2f -%6.2f] \n",low,upper ); 
         printf("%s", label);
         scanf("%d", &localInput);
         errorCounter++;
     } while ( (localInput < low) || (localInput > upper) );
      
      return localInput;
}

// Leap year function
int leapYear( int year ) {
    if ( (year%4) != 0 )
       return 0;
    else if ( ((year%100) == 0) && ((year%400) != 0) )
            return 0;
         else
             return 1;
}  

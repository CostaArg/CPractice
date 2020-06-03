#include <stdio.h>
#include <stdlib.h>

int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
char *month[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
char day[]={'M','T','W','T','F','S','S'};

void printMonth(int, int*);
int InputInt( char[], int, int);
void printYear(int, int);
int leapYear(int);
    
int main() {
    int year,day;
    
    year = InputInt("Give the year [1-2500] : ",1,2500);
    days[1] += leapYear( year );  
    day = InputInt("Give the 1st of the year [1-7] [1 for Mon, 2 for Tue, 7 for Sun : ",1,7); 
    printYear(year,day);
    
    system("pause");
    return 0;
}

void printYear(int whichYear, int firstDay) {
     int i;
     for (i=1;i<=12;i++)
          printMonth(i,&firstDay);
}
     
void printMonth(int whichMonth, int *firstDay) {
     int i,j;
     
     printf("\n%12s\n",month[whichMonth-1]);
     for (i=0;i<7;i++)
         printf("%3c",day[i]);
     printf("\n");
                 
     for (i= 1 ; i<=(*firstDay)-1; i++)
         printf("%3c",' ');
     for (i=*firstDay; i<(*firstDay+days[whichMonth-1]); i++) {
         printf("%3d",i-(*firstDay-1));
         if ( (i%7)==0 )
            printf("\n");
     }
     printf("\n");
     *firstDay = (i % 7);
}         
    
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

int leapYear( int year ) {
    if ( (year%4) != 0 )
       return 0;
    else if ( ((year%100) == 0) && ((year%400) != 0) )
            return 0;
         else
             return 1;
}  

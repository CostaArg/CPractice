#include <stdio.h>
#include <stdlib.h>



void printMonth(int, int);
int InputInt( char[], int, int);
    
int main() {
    int mon,day;
    
    mon = InputInt("Give the month [1-12] : ",1,12);
    day = InputInt("Give the 1st of the month [1-7] [1 for Mon, 2 for Tue, 7 for Sun : ",1,7); 
    printMonth(mon,day);
    
    system("pause");
    return 0;
}

void printMonth(int whichMonth, int firstDay) {
     int i,j;
     char day[]={'M','T','W','T','F','S','S'};
     int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
     char *month[] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};
     
     printf("\n%12s\n",month[whichMonth-1]);
     for (i=0;i<7;i++)
         printf("%3c",day[i]);
     printf("\n");
                 
     for (i= 1 ; i<=firstDay-1; i++)
         printf("%3c",' ');
     for (i=firstDay; i<(firstDay+days[whichMonth-1]); i++) {
         printf("%3d",i-(firstDay-1));
         if ( (i%7)==0 )
            printf("\n");
     }
     printf("\n");
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

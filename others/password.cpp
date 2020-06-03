// IST College
// LSBU TopUp Program. Level 4. Semester B.
// Week 3: Login Example.
// User has three attempts to get the correct password
// DevCpp Compiler

#include <stdio.h>
#include <stdlib.h>

#define MAX_ATTEMPTS 3
#define PASSWORD 1234

#define TRUE 1
#define FALSE 0

int getUserPassword(char[]); 
int comparePassword( int, int );
void report_status(int); // Απλή εκτύπωση πληροφορίας εισόδου

int main()
{
    int access_status;
    int enteredPassword;
    int user_attempts=0; // μετρητής προσπαθειών εισαγωγής 

    do {
       enteredPassword = getUserPassword("Give your passord : "); 

       access_status = comparePassword( enteredPassword, PASSWORD );
               
       user_attempts++;
       if ( !access_status )
          printf("Wrong Input details. You have %2d attempts left.\n",MAX_ATTEMPTS-user_attempts);
    }
    while ( (!access_status) && (user_attempts < MAX_ATTEMPTS) );
        
    report_status( access_status );
    system("pause");
}

int getUserPassword(char  label[] )
{      
      int password;
       
      printf("%s",label);
      scanf("%d", &password);
      
      return( password);
}

int comparePassword( int a, int b)
{
    if ( a == b )
       return( TRUE);
    else
       return( FALSE);
}

void report_status(int status)
{
     if (status)
        printf("Access Granted.\n");
     else
        printf("Access Denied.\n");
}

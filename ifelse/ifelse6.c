#include <stdio.h>

void main()

{
    char ch ;

    printf("\n Enter any character = ");

    scanf("%c" , &ch);

 if ( isupper(ch)) 
   {  
    printf("\n %c " , tolower(ch));// It will print smaller 
   }

else if (islower(ch)) 
 
   {
    printf("\n %c" , toupper(ch));// It will print capital
   }


else    

{
    printf(" Its other character");// for accepting only alphabet 

}
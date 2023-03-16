#include <stdio.h>

void main()

{
    char ch ;

    printf("\n Enter any character = ");

    scanf("%c" , &ch);

 if (ch == 'a' || ch == 'A' ||ch == 'E' ||ch == 'e' ||ch == 'I' ||ch == 'i' ||ch == 'o' ||ch == 'O' ||ch == 'u' ||ch == 'U' )
   {  
    printf("\n Its a vowel");
   }


   else 
   {
    printf("\n Its other character");
   }


}
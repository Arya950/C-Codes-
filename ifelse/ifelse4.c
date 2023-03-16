#include <stdio.h>

void main()

{
    int  no ;
    char op ;
    printf("\n Enter s for square ");
    printf("\n Enter c for cube ");

    printf("\n Enter option number =  ");
    scanf("%c" , &op);

 if (op == 's' || op == 'S' )
   {  
    printf("\n  Enter number = ");
    scanf(" %d" , &no);

    printf(" \n Sqaure = %d " , no*no);
   }


  else if (op == 'c' || op == 'C')
   {
    printf(" \n Enter number = ");
    scanf(" %d" , &no);

    printf(" \n Cube = %d " , no*no*no);
   }
 
  else 
{
    printf(" No option found");
}
}

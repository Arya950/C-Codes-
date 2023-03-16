#include <stdio.h>

void main()

{
    int op , no ;

    printf("\n Enter option number 1 for square ");
    printf("\n Enter option number 2 for cube ");

    printf("\n Enter option number =  ");
    scanf("%d" , &op);

 if (op == 1 )
   {  
    printf("\n  Enter number = ");
    scanf(" %d" , &no);

    printf(" \n Sqaure = %d " , no*no);
   }


  else if (op == 2)
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

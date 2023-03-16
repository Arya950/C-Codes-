#include <stdio.h>

void main()

{
    int code ;

    printf("\n Enter city code  = ");

    scanf("%d" , &code);

 if (code == 79)
   {  
    printf("\n Ahmedabad");
   }

  else if  ( code == 22)
   {
    printf("\n Mumbai");
   }

   else if  ( code == 261)
   {
    printf("\n Surat");
   }

   else if  ( code == 281)
   {
    printf("\n Rajkot ");
   }

   else 
   {
    printf("\n No data found");
   }


}
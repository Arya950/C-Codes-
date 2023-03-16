#include <stdio.h>

int main()

{
    float mts , bio ,chem , phy , com , total , per ;

    printf("\n Enter maths marks = ");
    scanf("%f" , &mts);

    printf("\n Enter chemistry marks = ");
    scanf("%f" , &chem);

    
    printf("\n Enter physics marks = ");
    scanf("%f" , &phy);

    
    printf("\n Enter biology marks = ");
    scanf("%f" , &bio);

    
    printf("\n Enter computer marks = ");
    scanf("%f" , &com);

    total=mts+bio+phy+com+chem;

    printf("\n Total = %f " , total);

    per= total*100/500;

    printf("\n Percentage = %f" , per);

if ( per>=0 && per<40)

   {

     printf("\n F grade");

   }

else if (per>=40 && per<60)   
    
    {

     printf("\n E grade");

   }

else if (per>=60 && per<70)   
    
    {

     printf("\n D grade");

   }   

else if (per>=70 && per<80)   
    
    {

     printf("\n C grade");

   }

else if (per>=80 && per<90)   
    
    {

     printf("\n B grade");

   }

else if (per>=90 && per<=100)   
    
    {

     printf("\n A grade");

   }

else
{
    printf("\n Not Valid Input");
}

}
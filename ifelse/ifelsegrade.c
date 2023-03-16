#include<stdio.h>

int main()

{
    int mts , ss , eng , total ;

    printf("\n Enter maths marks = ");
    scanf("%d" , &mts);

    printf("\n Enter sst marks = ");
    scanf("%d" , &ss);

    printf("\n Enter eng marks = ");
    scanf("%d" , &eng);

    total = mts+ss+eng;

    printf("\n Total = %d" , total );

    if ( total>=0 && total<=50)

    {

      printf("\n C grade");

    }

    else if ( total >50 && total <100)
    
    {

      printf("\n B grade");

    }

    else 

    {

      printf("\n A grade");

    }

}



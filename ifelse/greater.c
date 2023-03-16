#include<stdio.h>

main()
{
     int a,b,c;

     printf("\n enter the first no=>");
     scanf("%d",&a);
     printf("\n enter the second no=>");
     scanf("%d",&b);
     printf("\n enter the third no=>");
     scanf("%d",&c);

     if(a>b && a>c)
     {
          printf("\n number one is largest");
     }
     else if (b>c && b>a)
     {
          printf("\n number two is greater");
     }
     else if (a==b && a==c )
     {
          printf("\n all three numbers are equal ");
     }
     else
     {
          printf("\n number three  is greater");
     }





}
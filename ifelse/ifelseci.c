#include <stdio.h>
#include <math.h>

void main()

{
  float a , p , r , n , t ;

  printf("\n Enter Principal balance (p) = ");
  scanf("%f" , &p);

  printf("\n Enter Interest Rate (r)  = ");
  scanf("%f" , &r);

  printf("\n Enter Number of times interest increased per time period (n) = ");
  scanf("%f" , &n);

  printf("\n Enter Time elapsed (t) = ");
  scanf("%f" , &t);

        a = p*( pow (1 + r/n , n*t));

    printf("\n Compound Interest = %f " , a );

}
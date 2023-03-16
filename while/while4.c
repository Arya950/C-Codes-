#include<stdio.h>

void main()

{
    int n , i , f=1;

printf("\n Enter limit = ");
scanf("%d" , &n );

i=n;

while (i>=1)
{
    printf(" %d x " , i);
    f=f*i;
    i--;
}
    printf("\n Factorial = %d" , f);
}
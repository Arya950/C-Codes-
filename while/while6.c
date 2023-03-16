// Even Only

#include<stdio.h>

void main()

{
    int n , i ; 

printf("\n Enter Number = ");
scanf("%d" , &n );

i=1;

while (i<=n)
{
    if(i%2==0)
{
    printf("\n %d is even " , i);
} 
}
}
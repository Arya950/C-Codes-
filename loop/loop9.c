// 1+4+9+25+

#include<stdio.h>

main ()

{

int i , n , sum=0 ;

printf(" Enter limit =");
scanf("%d" , &n);

for(i=1;i<=n;i++)

{ 
    printf(" %d +", i*i);
    sum=sum+i*i;
}
  printf("\n Sum = %d" , sum);
}
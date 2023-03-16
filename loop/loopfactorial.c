// Factorial

#include<stdio.h>

int main ()

{

int i , n , f=1;

printf(" Enter limit =");
scanf("%d" , &n);

for(i=n;i>=1;i--)

{

  printf(" %d x ", i);
  f=f*i; 
}
  printf("\n Factorial = %d" , f);
}

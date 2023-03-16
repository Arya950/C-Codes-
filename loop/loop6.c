#include<stdio.h>

int main ()

{

int i , n , c=0 , sum=0 ;

printf("\n Enter limit =");
scanf("%d" , &n);

for(i=1;i<=n;i++)

{ 
    if (i%2==0)
    {
    printf("\n %d is even ", i);
    c++;
    sum=sum+i;

    }

}

    printf("\n No. of digits = %d ,Sum = %d " , c, sum);
  
}
#include<stdio.h>

int main ()

{

int i , n , c=0 , sum=0 ;

printf("\n Enter limit =");
scanf("%d" , &n);

for(i=1;i>=n;i--)

{ 
   
   printf("\n %d", i);
    c++;
    sum=sum+i;
    
}

    printf("\n No. of digits = %d" , c);
    printf("\n Sum = %d" , sum);
if (sum>=0)
 {
     
if (sum%2==0)
 {
    printf("\n Sum is even  " , sum);
 }

else 
  {
    printf("\n Sum is odd  " , sum);
  }

}

else 
{
    printf("\n Its an integer");
}

}
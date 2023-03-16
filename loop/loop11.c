// +1-2+3-4+5

#include<stdio.h>

int main ()

{

int i , n , sum=0 ;

printf(" Enter limit =");
scanf("%d" , &n);

for(i=1;i<=n;i++)

{
if (i%2==0)
{
    printf(" - %d " , i);
    sum=sum-i;
}
else
{ 
    printf(" + %d ", i);
    sum=sum+i;
}

}
   printf("\n Sum = %d" , sum);
}



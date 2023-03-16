// 1+4+27+16+125+

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
    printf(" %d +" , i*i);
    sum=sum+i*i;
}
else
{ 
    printf("%d +", i*i*i);
    sum=sum+i*i*i;
}

}
   printf("\n Sum = %d" , sum);
}


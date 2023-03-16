#include <stdio.h>

 void main()

{

    int i=1,n , prime =0;

    printf("\n Enter number= ");
    scanf("%d",&n);

   while(i<=n/2)
{
    if(n%i==0)
    {

     prime=1;
      break;
    }
    
    i++;
}   
    if(prime==0 )
    {
        printf("\n its prime number ");
    }
    else
    {
        printf("\n its not prime number ");
    }



    

}
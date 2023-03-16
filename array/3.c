#include<stdio.h>

main()
{
    int i , a[100] , sum=0;
    
    for(i=1;i<=10;i++)
    
    {
    
    printf("\n Enter number = ");
    scanf("%d" , &a[i]);
    
    sum=sum+a[i];
    
}

printf("\n Sum = %d" , sum);

}
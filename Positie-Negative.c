#include <stdio.h>

main()

{
    int i , n , a[100] , pos=0 , neg = 0 , zero = 0 ;

    printf("\n Enter number of digits = ");
    scanf("%d" , &n);

    for(i=0;i<n;i++)
    {
    
    printf("\n Enter %d number = " , i+1);
    scanf("%d" , &a[i]);

    if(a[i]>0)
    {
       pos++;
    }

    else if(a[i]<0)
    {
        neg++;
    }
    else
    {
        zero++;
    }
    }
    printf("\n %d positive numbers" , pos);
    printf("\n %d negative numbers" , neg);
    printf("\n %d are zeros" , zero);
}
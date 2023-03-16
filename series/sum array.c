#include<stdio.h>

main()

{
    int i,n,a[10],sum=0;

    for(i=0; i<10; i++)
    {
        printf("\n Enter a %d number : ",i+1);
        scanf("%d",&a[i]);
         
         sum+=a[i];
    }
    printf("\n sum of 10 num =%d",sum);





}
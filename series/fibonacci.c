#include <stdio.h>

main()
{
    int no1=0,no2=1,n3,i,no;

    printf("\n enter the number of elements :");
    scanf("%d",&no);

    for (i= 0; i <no; i++)
    {
        n3=no1+no2;
        printf("%d",n3);
        no1=no2;    
        no2=n3;
    printf("\t");
    }
    
}
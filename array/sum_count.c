#include <stdio.h>

int  main ()

{
    int a[100]={ 11,-3,45,22,50,-1,-60,8,9};

    int n=9,i,c1=0,c2=0,s1=0,s2=0;

    printf("\n values are");
    
    for(i=0; i<n; i++)
    
    {
        if(a[i]%2==0)
        
        {
            printf("\n%d is even",a[i]);
            c1++;
            s1=s1+a[i];
        }
        else
        {
            printf("\n %d is odd",a[i]);
            c2++;
            s2=s2+a[1];
        }
}
        printf("\n sum of even=%d count=%d",s1 , c1);
        printf("\n sum of even=%d count=%d",s2 , c2);

}
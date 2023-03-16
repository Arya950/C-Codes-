#include<stdio.h>

main ()

{

int i , n ;

printf("\n Enter Limit =");
scanf("%d" , &n);

for (i=1;i<=n;i++)
{

    if(i==5 || i==7 || i==9)
    
    {
        break;    // This Will end the loop
    }

    printf("\n Hi Hello %d " , i);
}

}
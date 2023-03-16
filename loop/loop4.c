#include<stdio.h>

main ()

{

int i , n;

printf("\n Enter number =");
scanf("%d" , &n);

for(i=1;i<=n;i++)

{ 
    printf("\n Number=%d , Square = %d , Cube = %d", i , i*i , i*i*i);
}

}
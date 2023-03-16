#include <stdio.h>

int main()
{
    int a , b , z ;
    
    printf("\n enter value of a =");
    scanf("%d" , &a);
    
    printf("\n enter value of b =");
    scanf("%d" , &b);
    
    z= a*a*a - b*b*b;
    printf("\n %d" , z );
    
    return 0;
}
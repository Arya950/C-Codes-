// factorial in while

#include <stdio.h>

int main()

{
	int n , i ;
	
	printf("\n Enter number = ");
	scanf("%d" , &n);
	
	i=1;
	
	do 
	
	{
	printf("\n %d x %d = %d" , n , i , n*i );
	i++;
	}
	while(i<=10);
}
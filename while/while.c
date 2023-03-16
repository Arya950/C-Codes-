#include <stdio.h>

 main()

{
	int n , i;
	
	printf("\n Enter number = ");
	scanf("%d" , &n);
	
	i=1;
	while(i<=10)
{
	printf("\n %d x %d = %d" ,n,i,n*i);
	i++;
}

		
}
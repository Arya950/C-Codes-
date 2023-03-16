#include <stdio.h>

main()

{
	int a[100];
	
	int n , i ;

    printf("\n Enter limit = ");
	scanf("%d" , &n);

	for (i=0;i<n;i++)

	{
		printf("\n Enter number = ");
		scanf("%d" , &a[i]);
	}	
	   for (i=0;i<n;i++)

	   {
		 printf("\n Value a[%d] = %d " ,i, a[i]);
	   }
}
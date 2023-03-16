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
		if(a[i]%2==0)

        {
            printf("\n %d is even " , a[i]);
        }

        else
        
        {
            printf("\n %d is odd " , a[i]);
        }
	}
}
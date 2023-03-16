#include <stdio.h>

main()

{
	int n,rev=0,rem, result=0,org;
	
	printf("\n enter the number");
	scanf("%d",&n);
	org=n;
      
      while(n!=0)
      {
      	rem=n%10;
        rev=rev*10+rem;

      	
      	n/=10;
	  }
      

      if(rev==org)
      {
        printf(" is palli  number ");

      }
	else 
    {
        printf("\n is not palli number ");
    }
}
	
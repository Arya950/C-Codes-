#include <stdio.h>

main()

{
	int n,rev=0,rem, result=0;
	
	printf("\n enter the number");
	scanf("%d",&n);
      
      while(n!=0)
      {
      	rem=n%10;
        result+=rem*rem*rem;
      	rev=rev*10+rem;
      	
      	n/=10;
	  }
      

      if(result==n)
      {
        printf("%d is armstrong number ",n);

      }
	else 
    {
        printf("\n %d is not armstong number ",n);
    }
	
	
}
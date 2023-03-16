// ATM machine type code

#include <stdio.h>

int main()

{
	int n , op ;
	
	do
	{
	    

	printf("\n Enter 1 for square ");
	printf("\n Enter 2 for cube ");
	printf("\n Enter 3 for exit ");
	
	printf("\n Enter Option number = ");
	scanf("%d" , &op);
	
	if(op==1) 
	
	{
	printf("\n Enter number =  ");
	scanf("%d" , &n );
	
	printf("\n Square = %d" , n*n);
	}
	
	else if(op==2) 
	
	{
	printf("\n Enter number =  ");
	scanf("%d" , &n );
	
	printf("\n Cube = %d" , n*n*n);
	}
	
	else if(op==3) 
	
	{
	printf("\n Phiir milte hain !!!");
	
	}
	
	else
	
	{
	    printf("\n Wrong Option");
	}
	
}while(op!=3);

}


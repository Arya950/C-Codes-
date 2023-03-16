// ATM machine type code

#include <stdio.h>

int main()

{
	int n ;
	char op;
	
	do
	{
	    
	
	printf("\n Enter s for square ");
	printf("\n Enter c for cube ");
	printf("\n Enter e for exit ");
	
	printf("\n Enter Option number = ");
	scanf("%c" , &op);
	
	if(op=='s' || op=='S') 
	
	{
	printf("\n Enter number =  ");
	scanf("%d" , &n );
	
	printf("\n Square = %d" , n*n);
	}
	
	else if(op=='c' || op=='C') 
	
	{
	printf("\n Enter number =  ");
	scanf("%d" , &n );
	
	printf("\n Cube = %d" , n*n*n);
	}
	
	else if(op=='e' || op=='E') 
	
	{
	printf("\n Phiir milte hain !!!");
	
	}
	else
	{
	    printf("\n Wrong Option");
	}
	
    }while(op!='e');

}


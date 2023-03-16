int main() {
    
    int op;
    int qty;
    
    printf("\nEnter 1 for pizza(500)");
    printf("\nEnter 2 for maggie(50)");
    printf("\nEnter 3 for sandwich(300)");
    printf("\nEnter 4 for burger(200)");
    printf("\n Enter 5 for total bill");
    printf("\nEnter op =>");
    scanf("%d",&op);
 do
{
    

    if(op==1)
    {
        printf("\nEnter qty of pizza =>");
        scanf("%d"&qty);
        printf("\n Price of pizza per plate is 500");
    }
    
    else if(op==2)
    {
        printf("\nEnter qty of maggie =>");
        scanf("%d",&qty)
        printf("\n Price of maggie per plate is 50");
    }
    else if(op==3)
    {
        printf(" Enter qty of Sandwich : ");
        scanf("%d\n", &qty);
        printf("\n Price of sndwich per plate is 300");
 
    }

       else if(op==4)
    {
        printf(" Enter qty of burger : ");
        scanf("%d\n", &qty);
        printf("\n Price of burger per plate is 200");
 
    }

       else if(op==5)
    {
        printf("\n");
    }
    
    
    else
    {
    	printf("Wrong option \n");
    }
}while(op!=5);
    
     



}

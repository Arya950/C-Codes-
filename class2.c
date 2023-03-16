int main() {
    
    int op;
    int qty;
    
    printf("\nEnter 1 for pizza(500)");
    printf("\nEnter 2 for maggie(50)");
    printf("\nEnter 3 for sandwich(300)");
    printf("\nEnter 4 for burger(200)");
    printf("\nEnter op =>");
    scanf("%d",&op);
    
    if(op==1)
    {
        printf("\nEnter qty of pizza =>");
        scanf("%d",&qty);
        printf("\nYour biil = %d",qty*500);
    }
    
    else if(op==2)
    {
        printf("\nEnter qty of maggie =>");
        scanf("%d",&qty);
        printf("\nYour biil = %d",qty*50);
    }
    else if(op==3)
    {
        printf(" Enter qty of Sandwich : ");
        scanf("%d\n", &qty);
        printf("Your bill is %d",qty*300);
    }

       else if(op==4)
    {
        printf(" Enter qty of burger : ");
        scanf("%d\n", &qty);
        printf("Your bill is %d",qty*200);
    }
    
    else
    {
    	printf("Wrong option \n");
    }
    return 0;
}

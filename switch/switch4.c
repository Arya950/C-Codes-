#include <stdio.h>
main()
{
	int a ,b ;
    char op;
    
	printf("\n Enter + for add");
    printf("\n Enter - for sub");
    printf("\n Enter * for mul");
    printf("\n Enter / for div");

    printf("\n Enter option number =");
	scanf("%d",&op);

    switch(op)
    {
        case '+':
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Add = %d" , a+b);

        break;

        case '-':
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Sub = %d" , a-b);
            
        break;

        case '*':
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Mul = %d" , a*b);
            
        break;

        case '/':
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Div = %d" , a/b);

        break;

        default:
        printf("\n Wrong option");

    }

}              
#include <stdio.h>
main()
{
	int op , a ,b ;
	printf("\n Enter 1 for add");
    printf("\n Enter 2 for sub");
    printf("\n Enter 3 for mul");
    printf("\n Enter 4 for div");

    printf("\n Enter option number =");
	scanf("%d",&op);

    switch(op)
    {
        case 1:
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Add = %d" , a+b);

        break;

        case 2:
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Sub = %d" , a-b);
            
        break;

        case 3:
            printf("\nEnter value of a =");
            scanf("%d" , &a);

             printf("\nEnter value of b =");
            scanf("%d" , &b);

            printf("\n Mul = %d" , a*b);
            
        break;

        case 4:
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
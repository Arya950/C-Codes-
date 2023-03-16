#include <stdio.h>
main()
{
	int month;
	printf("\n enter month=>");
	scanf("%d",&month);

    switch(month)
    {
        case 1:
            printf("\nJanuary");
        break;

        case 2:
            printf("\nFEB");
        break;

        case 3:
            printf("\nmarch");
        break;
        
        case 4:
            printf("\napril");
        break;
        
        case 5:
            printf("\nmay");
        break;

        case 6:
            printf("\njune");
            break;

        case 7:
            printf("\njuly");
            break;

        case 8:
            printf("\naug");
            break;

        case 9:
            printf("\nsep");
            break;

        case 10:
            printf("\noct");
            break;

        case 11:
            printf("\nnov");
            break;

        case 12:
            printf("\n dec");
            break;

        default:
            printf("\nWrong opt");
    }

    return 0;
}

#include <stdio.h>

main()

{ 
    int d ;

    printf("\n Enter day number= ");
    scanf("%d", &d);

    switch(d)

    { 
        case 1:
        printf("\n Sun");
        break;

        case 2:
        printf("\n Mon");
        break;

        case 3:
        printf("\n Tues");
        break;

        case 4:
        printf("\n wed");
        break;

        case 5:
        printf("\n Thrus");
        break;

        case 6:
        printf("\n Fri");
        break;

        case 7:
        printf("\n Sat");
        break;

        default:
        printf("\n Wrong option ");
    }

}
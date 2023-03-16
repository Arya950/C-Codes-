#include <stdio.h>

main()
{
    int i , j , a[2][2] , b[2][2];

printf("\n Enter Elements of 1st Matrix");
    
    for(i=0; i<2; i++)
    {
        printf("\n Enter %d row =>\n " , i+1);
        
        for(j=0; j<2; j++)
        {
            printf("\n Enter %d%d element =>" , i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    }

printf("\n Enter elements of 2nd Matrix\n");
     for(i=0; i<2; i++)
    {
        printf("\n Enter %d row =>\n " , i+1);
        
        for(j=0; j<2; j++)
        {
            printf("\n Enter %d%d element =>" , i+1 , j+1);
            scanf("%d",&b[i][j]);
        }
    }

      printf("\n Elements of 1st matrix are =\n");
      
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d ",a[i][j]);
        }
        
      printf("\n");
    }

      printf("\n Elements of 2nd matrix are =\n");
      
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d ",b[i][j]);
        }
        printf("\n");
    }
    
   printf("\n Addition of matrix  \n ");
   
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
           printf("%d\t ", a[i][j]+b[i][j]);
        }
        printf ("\n");
    }
}


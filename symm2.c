#include <stdio.h>

main()
{
    int i, j , n , c=0;

    printf("\n Enter order of square matrix = ");
    scanf("%d" , &n );
    
    int a[n][n];
    
    for(i=0; i<n; i++)
    {
        printf("\n Enter %d row =>\n " , i+1);
        
        for(j=0; j<n; j++)
        {
            printf("\n Enter %d%d element =>" , i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    }
      printf("\n Elements are =\n");
      
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            printf(" %d ",a[i][j]);
        }
        
      printf("\n");
    }

    for(i=0; i<n; i++)
      {
          for(j=0;j<n;j++)
          {
            if(a[i][j] == a[j][i])
            {
              c++;
            }
          }
      }

      if (c==n*n)
       {
         printf("\n It is symmetric matrix ");
       }

       else 
       {
        printf("\n It is not a syymetric matrix");
       }
}


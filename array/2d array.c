

 #include <stdio.h>

main()
{
    int i,j,a[2][2];

    
    for(i=0; i<2; i++)
    {
        printf("\n enter %d row => " , i+1);
        
        for(j=0; j<2; j++)
        {
            printf("\n Enter %d%d element =>" , i+1 , j+1);
            scanf("%d",&a[i][j]);
        }
    }
      printf("\n Elements are =\n");
      
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            printf(" %d ",a[i][j]);
        }
        
      printf("\n");
    }
    

}


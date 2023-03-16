

 #include <stdio.h>

main()
{
    int i,j,a[3][3];

    printf("\n enter elements =>");
    for(i=0; i<3; i++)
    {
        
        for(j=0; j<3; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
      printf("\n Elements are =\n");
      
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf(" %d ",a[i][j]);
        }
        

    }
    

}


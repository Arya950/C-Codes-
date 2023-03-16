{
    int i , j , a[3][3];

   
   
   for(i=0;i<3;i++)
   {
        printf("\n Enter %d row = " , i+1);
        
    for(j=0;j<3;j++)
    {
        scanf("%d" , &a[i][j]);
    }
   }
   
   printf("\n Elements are = \n");
   
    for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
        if(a[i]==a[j])
        {
            printf(" 1");
        }
        else
        {
            printf(" 0");
        }
    }
    printf("\n");
   }
 }
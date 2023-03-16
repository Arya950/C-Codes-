#include <stdio.h>
 
 int main()
{
  int n;
  lavi:

  printf("\n Enter  positive number = ");
  scanf(" %d " , &n);

  if( n > 0)

  {
    printf("\n Square = %d " , n*n);
  }
 
 else 

 {
    printf("\n Sorry Try again");
    goto lavi;
 }

}

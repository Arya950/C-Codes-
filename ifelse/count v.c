#include <stdio.h>

int main() {
    char a[100] ,c=0;
    printf("\n Enter the paragraph =>");
    scanf("%s",&a);
    printf("your text is =>\n %s",a);

    if (a == 'a' || a == 'A' ||a == 'E' ||a == 'e' ||a == 'I' ||a == 'i' ||a == 'o' ||a == 'O' ||a == 'u' ||a == 'U' )
   {  
    c++;
   }


   else 
   {
    c++;
   }
   printf("\n vowels =%d",c);
   printf("\n conosonent=%d",c);

}
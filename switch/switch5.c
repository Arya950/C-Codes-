#include <stdio.h>

main()

{
  char ch ;

  printf("\n Enter alphabet =");
  scanf("%c" , &ch);

  switch(ch)

  {

   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':

printf("\n Its a vowel");

break;

default:

printf("\n Other character");

  }


}.
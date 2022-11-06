#include <stdio.h>
 
int main()
{
  char ab;
 
  printf("Enter a character\n");
  scanf("%c", &ab);
 
  switch(ab)
  {
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("this is vowel %c\n", ab);
      break;
    default:
      printf("this is consonant %c\n", ab);
  }              
 
  return 0;
}
 
#include<stdio.h>
 
int main() 
{
   char s1[100], s2[100];
   int i=0;
 
   printf("\nEnter two strings :");
   gets(s1);
   gets(s2);

   while (s1[i] == s2[i] && s1[i] != '\0')
      i++;
   if(s1==s2)
      printf("s1 is equal to s2");\
      else printf("not equal");
 
   return 0;
}
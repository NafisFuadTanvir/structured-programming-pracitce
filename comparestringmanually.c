#include<stdio.h>
 
int main() {
   char a[30],b[30];
   int i=0;
 
   printf("Enter two strings :");
   gets(a);
   gets(b);
 
   while (a[i]==b[i] && a[i]!= NULL && b[i]!=NULL)
     {  
         i++;
     }
   if (a[i]==b[i])
      printf("strings are same");
  else
      printf("strings are not same");
 
   return 0;
}
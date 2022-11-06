#include<stdio.h>
int main()
{
   int mark;

   printf("Enter the mark:-\n");
   scanf("%d",&mark);

   switch( mark / 10 )
   {

   case 9:
   printf("A+");
   break;

   case 8:
 printf("A");
     break;

   case 7:
     printf("A-");
     break;

   case 6:
     printf("B");
     break;

   case 5:
     printf("B-");
     break;

   case 4:
     printf("C+");
     break;
   case 3 :
     printf("C");
     break;
     case 2:
     printf("D");
     break;
default:
     printf("F");
     break;
     
   }

   return 0;
}

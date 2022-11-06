#include <stdio.h>
 
int main()
{
  int Number,Reminder,Reverse=0;
 
  printf("Enter number to Reverse ");
  scanf("%d", &Number);
 
  while (Number!=0)
   {
     Reminder = Number %10;
     Reverse = Reverse*10+ Reminder;
     Number = Number/10;
   }
 
  printf("Reverse number is  %d\n", Reverse);
 
  return 0;
}
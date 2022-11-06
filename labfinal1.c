#include <stdio.h>
int main() {
  int n,w;
  int i=0;
  printf("Enter 1st integer: ");
  scanf("%d",&n);
  printf("enter 2nd number:- ");
  scanf("%d",&w);
 
  while (n!=0){
   n = n/10; 
   if(w==n)
   {
       w++;
   }
    i++;
  } 

  printf("Number of digits: %d %d",i,w);
}
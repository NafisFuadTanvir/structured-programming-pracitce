#include<stdio.h>
int main()

{ 
    int sum,number ,n;
    scanf ("%d",&number) ;
    sum=0;
do
{ 
    n=number%10; 
    sum=sum+n;
number=number/10; 
}
 while (number!=0);
 printf("Sum of digits of given number is = %d\n" ,sum);
 
 return 0;
}

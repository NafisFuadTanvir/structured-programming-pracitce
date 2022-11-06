#include<stdio.h>
int main()
{

int a,b,c;
scanf("%d %d %d",&a,&b,&c);

int *pointer1,*pointer2,*pointer3,sum;
pointer1 =&a;
pointer2 =&b;
pointer3 =&c;

sum= *pointer1 + *pointer2 + *pointer3;

printf("sum is %d\n",sum);










}
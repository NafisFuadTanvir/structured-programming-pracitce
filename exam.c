#include<stdio.h>
int main()
{


int a,b;
scanf("%d",&a);
if(a!=0)
{
    b= a%10;
    a= a/10;
}
printf("%d ",a);
}
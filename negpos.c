#include<stdio.h>
int main()
{

int a;
printf("enter the number:- ");
scanf("%d",&a);

if(a>0)
{
    printf("the number is positive\n");
}
else if(a<0)
{
    printf("the number is negative\n");
}
else
{
    printf("the number is zero\n");
}


}
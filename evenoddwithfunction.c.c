#include<stdio.h>
int checkevenodd(int a)
{

if(a%2==0)
{
    printf("the number is even\n");
}
else {
    printf("the number is odd");
}
}

int main()
{

int a;
printf("enter the number for cheking even odd:- ");
scanf("%d",&a);
checkevenodd(a);

return 0;

}
#include<stdio.h>
int main()
{
int a,b,c;
printf("enter the numbers:- ");

scanf("%d %d %d",&a,&b,&c);

if(a>b && a>c)
{
printf("a is the maximum number\n");
}

else if(b>a && b>c)
{
    printf("b is the maximum number\n");

}

else{
    printf("c is the maxium number\n");
}

}
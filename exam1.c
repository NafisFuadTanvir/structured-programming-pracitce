#include<stdio.h>
int main()
{
    int A,a,b,c,d;
printf("Enter The Number of A:- ");
    scanf("%d",&A);

    a= A%10;
    A= A/10;
    b=A%10;
    A= A/10;
    c= A%10;
    d=A/10;
   

    printf("%d %d %d %d",d,c,b,a);

    return 0;
}
#include<stdio.h>
int main()
{
    int a[10], i,n;
    printf("enter the size:- ");
    scanf("%d",&n);
    printf("scan the numbers:- ");
    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
    }

    printf("printing in reverse order:-   ");
    for(i=n-1;i>=0;i--)
    {

        printf("%d ",a[i]);
    }



}

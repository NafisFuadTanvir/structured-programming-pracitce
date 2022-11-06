#include<stdio.h>
int main()
{
int row,col,n;
printf("enter the value of n : ");
scanf("%d",&n);

for(row=1;row<=n;row++)
{
    //printing space
for(col=1;col<=n-row;col++)
{
    printf(" ");
}
//printing stars
for(col=1;col<=2*row-1;col++)
{
    printf("*");
}
printf("\n");
}

for(row=n-1;row>=1;row--)
{
    //printing space
for(col=1;col<=n-row;col++)
{
    printf(" ");
}
//printing stars
for(col=1;col<=2*row-1;col++)
{
    printf("*");
}
printf("\n");
}




}
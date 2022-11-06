#include<stdio.h>
int main()
{
 int a[10],sum=0,n,i;
printf("how many numbers:  ");
scanf("%d",&n);

printf("enter the numbers : ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{

    sum= sum + a[i];
}

printf(" the sum is: %d\n",sum);

printf("the avarege is : %d\n", sum/5);




}
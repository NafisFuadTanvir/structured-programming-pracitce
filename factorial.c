#include<stdio.h>
int main()
{
int i,n;
printf("enter the value of n : ");
scanf("%d",&n);

for(i=2;i<=n/2;i++)

{
    if(n%i==0)
    {

        printf("not prime");
        break;
    }
printf("prime");
}




}

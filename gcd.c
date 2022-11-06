#include<stdio.h>
int main()
{
int a,b,x,gcd;
printf("enter the number of a nd b : " );
scanf("%d%d",&a,&b);
if(a<b)
{
    x=a;
}
if(b<a){
    x=b;
}

for(;x>=1;x--)
{

    if(a%x==0 && b%x== 0)
    {
        gcd=x;
        
    }
    
}
printf("GCD IS %d\n",gcd);

}
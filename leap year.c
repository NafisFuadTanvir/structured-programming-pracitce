#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);

if(t%4==0 || t%400==0){


printf("%d is the leap year\n",t);
}
else
{
printf("%d is not the leap year\n",t);
}


}

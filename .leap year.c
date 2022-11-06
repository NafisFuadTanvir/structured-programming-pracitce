#include <stdio.h>
int main()
{
int t;
scanf("%d",&t);


if(t%400==0)
{
printf("this is leap year %d");
}

else if(t%100!=0 && t%4==0)
{
printf("this is leap year %d");

}
else
printf("this is not an leap year %d");

return 0;
}

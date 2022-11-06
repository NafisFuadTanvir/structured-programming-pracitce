#include<stdio.h>
int main()
{
int a;
printf("enter the year: -");
scanf("%d",&a);

if(a% 400==0 || a % 100==0 || a % 4 == 0)
{
    printf("this year is leapyear");

}

else
{
    printf("this is not a leap year");
}

}
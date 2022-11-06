#include<stdio.h>

int leapyear(int l)
{
int a;
printf("enter the year:-- \n");
scanf("%d",&l);
if(a/400==0)
{
    printf("this is leapyear");
}
else{
    printf("this is not leapyear");
}

return l;
}

int main()
{

int a,result;

result= leapyear(a);


printf("LEAPYEAR =%d \n",result);







}
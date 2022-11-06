#include<stdio.h>
#include<math.h>
int main()
{
float pie,r,area,circumference;
printf("enter the value for  r:- ");

scanf("%f",&r);
pie= 3.1416;
area= pie*r*r;
circumference= 2*pie*r;
printf("the area of this circle is %.3f\n",area);
printf("the circumference of this circle is %.3f",circumference);
}
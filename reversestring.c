#include<stdio.h>
#include<string.h>
int main()
{

char a[50];
int length;
printf("enter the string:-");
scanf("%s",a);
printf("the reversed string is %s\n",strrev(a));
}
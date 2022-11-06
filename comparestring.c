#include<stdio.h>
#include<string.h>
int main()
{
 char a[20],b[20];
 int compare;
gets(a);
gets(b);

compare= strcmp(a,b);
printf("the result is:- %d",compare);



}
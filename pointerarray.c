#include<stdio.h>
int main()
{
int arr[10]={10,12,13,14,15};
int *p= &arr[2];

printf("%d\n",*p);
printf("%d\n",*p+1+1);
printf("%d\n",*p-1-1);
}

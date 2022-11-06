#include<stdio.h>
int main()
{
int nafis[50], i,n;

printf("how many numbers you want?\n");
scanf("%d",&n);
printf("enter those numbers :- ");

for(i=0;i<n;i++)
{
    scanf("%d",&nafis[i]);
}

int min = nafis[0];

for(i=1;i<n;i++)
{
 if(min >nafis[i])
 min = nafis[i];

 }

printf("the min number is the %d", min);




}
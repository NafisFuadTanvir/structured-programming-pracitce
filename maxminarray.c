#include<stdio.h>
int main()
{

int a[50],i,max,min,n;
printf("for maximum:- \n");
printf("enter the size:- ");
scanf("%d",&n);
printf("enter the elements: ");

for(i=0;i<n;i++)
{

scanf("%d",&a[i]);

}

max= a[0];
for(i=1;i<n;i++)
{

    if(max<a[i])
        max=a[i];
}

printf("the max element is %d\n",max);


printf("Now for minimum:-\n");

min=a[0];
for(i=1;i<n;i++)
{

    if(min>a[i])
        min=a[i];
}
printf("the min element is %d\n",min);

}

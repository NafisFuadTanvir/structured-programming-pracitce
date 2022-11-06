#include<stdio.h>
int main()
{

int a[50],i,large,n;
printf("enter the size:- ");
scanf("%d",&n);
printf("enter the elements: ");
for(i=0;i<n;i++)
{

scanf("%d",&a[i]);

}
large= a[0];
for(i=1;i<n;i++)
{

    if(large<a[i])
        large=a[i];
}

printf("the largest element is %d\n",large);


}

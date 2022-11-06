#include<stdio.h>
int main()
{

int arr[10],i,n,first=0,last=n-1,mid,search;
printf("enter the size of the array:-");
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("enter the searching number: -");
scanf("%d",&search);

while(first<=last)
{
    mid=first+last/2;
    if(arr[mid]==search)
    {
        printf("the item is found in %d index\n",mid);
    }
    else if(arr[mid]<search)
    {
        first=mid+1;
        printf("the item is found in %d index\n",mid);
    }
    else{
        last=mid-1;
        printf("the item is found in %d index\n",mid);
    }

}

printf("item is not found");

}

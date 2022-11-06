#include<stdio.h>
int main()
{

int arr[100],i,n,min,max;
printf("enter the numbers you want: \n");
scanf("%d",&n);

for(i=0;i<n;i++)
{
scanf("%d",&arr[i]);

}

//for(i=0;i<n;i++)
//printf("%d ",arr[i]);
max= arr[0];
for(i=1;i<n;i++)

{
    if(arr[i]>max)
    {
        max= arr[i];
    }

}
printf("%d is the maximum number\n",max);


min= arr[0];
for(i=1;i<n;i++)

{
    if(arr[i]<min)
    {
        min= arr[i];
    }

}
printf("%d is the minimum number\n",min);








    return 0;
    
    
    }
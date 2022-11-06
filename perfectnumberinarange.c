#include<stdio.h>
int checkperfect(int n);

int main(){

    int n;
    printf("Enter n number: ");
    scanf("%d",&n);

    checkperfect(n);

return 0;
}

int checkperfect(int n){

 int sum=0,i;
for(i=1;i<n-1;i++)
    if(n%i==0)
    sum+=i;

    if(sum==n)
        printf("This is Perfect number");
    else
        printf("This is not a perfect number");
}

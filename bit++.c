#include<stdio.h>
int main()
{
    int n,X,i;
    char s[4];
    scanf("%d",&n);
    gets(s);
    for(i=0;i<n;i++)
    {
        gets(s);
        if(s[1]=='+')
            X++;
        else
            X--;
    }
    printf("%d",X);
    return 0;


}

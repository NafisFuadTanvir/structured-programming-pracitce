#include<stdio.h>
#include<string.h>
int main()
{
    int length,input;
    char string[100];
    scanf("%d",&input);
    while(input--)
    {
        scanf("%s",string);
        length= strlen(string);
        if(length<=10)
        {
            printf("%s\n",string);
        }
        else{
            printf("%c%d%c\n",string[0],length-2,string[length-1]);
        }
    }



}

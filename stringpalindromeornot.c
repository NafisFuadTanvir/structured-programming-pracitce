#include<stdio.h>
#include<string.h>
int main()
{
char a[20],b[20];

gets(a);
b=strrev(a);
if(b==a)
{
    printf("This is palindrome");
}
else{
    printf("this is not palindrome");
}




}
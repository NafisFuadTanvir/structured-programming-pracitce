#include<stdio.h>
int main()
{

char nafis;
printf("Enter the word for nafis:  ");
scanf("%c",&nafis);

if(nafis>='a' && nafis<='z')
{
    printf("%c is lowercase\n",nafis);
}
else if(nafis>='A' && nafis<='Z')
{
    printf("%c is uppercase\n",nafis);
}




}
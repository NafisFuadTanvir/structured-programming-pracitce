#include<stdio.h>
int main()
{
char nafis[50];
int i,capital,small,digit;
printf("Enter a string:-  \n");
gets(nafis);
i=capital=small=digit=0;

while(nafis[i]!= '\0')
{
 if(nafis[i]>=65 && nafis[i]<=90 )
 capital++;

 else if(nafis[i]>=97 && nafis[i]<=122)
small++;

else if(nafis[i]>=48 && nafis[i]<=57)

digit++;

i++;
}

printf("number of capital letter is: %d\n",capital);
printf("number of small letter is: %d\n",small);
printf("number of digit  is: %d\n",digit);

}
#include<stdio.h>

int printingarray(int nafis[])
{

int i;
for(i=0;i<5;i++)
{
    printf("%d\n",nafis[i]);
}
}

int main()
{

int nafis[]= {10,20,30,40,50};
 printingarray(nafis);
}
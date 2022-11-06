#include<stdio.h>
#include<stdlib.h>
int main()
{

    char *pointer;
    pointer= (char *)malloc(50);
    if(pointer==NULL)
    {
        printf("memory allocated failed\n");

    }
    else{
        printf("memory allocation success full.\n");
    }





}

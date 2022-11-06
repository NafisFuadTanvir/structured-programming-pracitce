#include<stdio.h>
int main()
{

FILE *nafis;
char name[20]= "Nafis Fuad Tanvir";
int age;
nafis= fopen("nafis.txt","w");

if(nafis==0)
{
printf("file doesnot excist");
}
    
else
{
printf("file is created\n");

printf("enter your age\n");
scanf("%d",&age);

fclose(nafis);
}

    





}
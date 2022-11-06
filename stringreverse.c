#include<stdio.h>
#include<string.h>
int main()
{

char name[100];
gets(name);
int n;
printf("the stirng is:-     %s\n",name);

strrev(name);

printf("the reverse system is:-     %s\n",name);
n = strrev(name);
if(name==n)
{
    printf("this is palandrome %d");
}
else{
    printf("this is not palandrome %d");
}





}
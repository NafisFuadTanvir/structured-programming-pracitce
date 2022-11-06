#include<stdio.h>
int main()
{
int nafis[]={10,20,30,40,50,60,70000,80},
value,i,position=-1;

printf("enter the number for the value you want to find\n");

scanf("%d",value);

for(i=0;i<9;i++)
{
if( value == nafis[i])
{
    position=i+1;
    break;
}
}
if(position == -1)
{
    printf("not found");

}
else{

printf("the position for %d is: ", position);

}

}

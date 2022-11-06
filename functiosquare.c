#include<stdio.h>

int square(int a)
{

    return a*a;
}

int sub (int a,int b)
{

return a-b;

}

int main()
{

int num,result,num1,num2, subtraction;;
printf("enter the number : \n");

scanf("%d",&num);

result=square(num);

printf("the square is:- %d\n",result); 

printf("enter the two numbers :- ");

scanf("%d %d",&num1,&num2);

subtraction = sub(num1,num2);

printf("the subtraction is %d\n", subtraction);



}
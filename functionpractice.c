#include<stdio.h>

void say_hello()
{
    printf("hello how are you?\n");

}

int sum(int a, int b)

{
    int sum = a+b;
    return sum;

}

//char word(char a,char b)
//{
//printf("%c %c",a,b);
   // return word;
//}

float sub(float c,float d)
{

    float sub= c-d;
    return sub;



}


int main()
{


printf("the programe is start for do the work:-\n");

while(1)
{

    say_hello();

int sum_result;
float sub_result;
char w;

sum_result= sum(110,120);

printf("the sum is %d\n",sum_result);

//w= word(b,c);
//printf("the words are %c\n",w);

sub_result= sub(50.2,20.2);

printf("the subtraction is %f\n",sub_result);

}

}

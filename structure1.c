#include<stdio.h>

struct member
{

int age;
float salary;
};
int main()
{
struct member member1,member2;

printf("enter the datas for person1:--\n\n");
printf("enter the age of person1--\n");
scanf("%d",&member1.age);
printf("enter the salary of person1--\n");
scanf("%f",&member1.salary);

printf("enter the datas for person2:--\n\n");
printf("enter the age of person2--\n");
scanf("%d",&member2.age);
printf("enter the salary of person2--\n");
scanf("%f",&member2.salary);

printf("The age of person1:--%d\n",member1.age);
printf("The sallary of person1:--%f\n",member1.salary);

printf("The age of person2:--%d\n",member2.age);
printf("The sallary of person2:--%f\n",member2.salary);


}
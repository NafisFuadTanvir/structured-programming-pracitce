#include<stdio.h>

struct student 
{
char name[50];
int age;
int roll_no;
float marks;
};

void print(char name[],int age, int roll_no,float marks)

{
    printf("%s %d %d %.2f\n",name,age,roll_no,marks);
}
int main()
{

struct student s1={"Nafis",20,8,85.2};
print(s1.name, s1.age, s1.roll_no, s1.marks);


}
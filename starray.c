#include<stdio.h>

struct person
{
char name[50];
int age;
int sallary;
int birthyear;


};

int main()
{
struct person member[10];
int i;
for(i=0;i<3;i++)
{

printf("enter the information of the member:- %d\n",i+1);
printf("Enter Name:- \n");
gets(member[i].name);
printf("Enter Age :- \n");
scanf("%d",&member[i].age);
printf("Enter sallary:-\n");
scanf("%d",&member[i].sallary);
printf("Enter birthyear:-\n");
scanf("%d",&member[i].birthyear);


}

for(i=0;i<3;i++)
{

printf("\n\n information of the member:- %d\n\n",i+1);
 
printf("Name:- %s\n",member[i].name); 
printf("Age:- %d\n",member[i].age);
printf("Sallary:- %d\n",member[i].sallary);

printf("Birthyear:- %d\n",&member[i].birthyear);



}





}
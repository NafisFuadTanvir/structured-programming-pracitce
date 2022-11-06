#include<stdio.h>
int main()
{
int rollnumber,s1,s2,s3,total;
float avg;
printf("enter the roll number : ");
scanf("%d", &rollnumber);
printf(" enter marks for 3 subjects : ");
scanf("%d%d%d",&s1,&s2,&s3);

total = s1+s2+s3;
avg = total/3.0;

printf(" total is %d\n",total);
printf ("avg is %f\n",avg);

if(avg>=60)
printf("grade is: A");
else if(avg>=50 && avg<60)

    printf("grade is: B");
else if(avg>=40 && avg<50)
    printf("grade is: C");
else
printf(" grade is : F");




}

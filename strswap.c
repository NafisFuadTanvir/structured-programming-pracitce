#include<stdio.h>
#include<string.h>
int main()
{
char Nafis[50]= "Nafis Fuad Tanvir";
char Jamil[50]= "Jamilur Rahaman";
char Samid[50];

printf("Before Swapping: \n\n\n");
printf("Na: %s\n",Nafis);
printf("Ja: %s\n\n",Jamil);

strcpy(Samid,Nafis);
strcpy(Nafis,Jamil);
strcpy(Jamil,Samid);

printf("After Swapping: \n\n\n");
printf("Na: %s\n",Nafis);
printf("Ja: %s\n",Jamil);





}
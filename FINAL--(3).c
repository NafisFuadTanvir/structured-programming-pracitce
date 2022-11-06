#include<stdio.h>
#include<string.h>
int Input_Number(int p);
int character_extractor(int r);
int password_generator(char a[]);
int Input_Number(int p)
{
  int i=0,m=p;
 while(m!=0) {
  m = m/10;
   i++;
}
   if(i!=5)
      printf("Wrong input\n");
else
      character_extractor(p);
}
int character_extractor(int r)
{
    char m[10];
    int q[10],i=0;
    while(r!=0) {
        q[i] = r%10;
        if(q[i]==0)
            m[i]='+';
        else if(q[i]==1)
            m[i] = '*';
        else if(q[i]==2)
            m[i]='n';
        else if(q[i]==3)
            m[i]='a';
        else if(q[m[i]='f';
else if(q[i]==5)
m[i]='i';
else if(q[i]==6)
m[i]='$';
else if(q[i]==7)
m[i]='s';
else if(q[i]==8)
m[i]='2';
else
m[i]='F';
r = r/10;
i++;
}
m[5] = '\0';
password_generator(m);
}
int password_generator(char a[])
{
char f[5];
int j;
for(j=0;j<5;j++)
f[j] = a[5-j-1];
f[5] = '\0';
printf("%s\n",f);
}
int main()
{
int n;
scanf("%d",&n);
Input_Number(n);
}

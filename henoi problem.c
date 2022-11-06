#include<stdio.h>
#define N 7
void toh(int n,char beg,char to, char aux)
{

if(n>0)
{

toh(n-1,beg,aux,to);
printf("move disk %d from %c to %c\n",n,beg,to);
toh(n-1,aux,to,beg);


}

}
int main()
{

toh(N,'A','B','C');

}

#include<stdio.h>

int main()

{ 
int count ,n;
 printf ("Enter the value of n\n") ; 
scanf ("%d",&n) ; 
printf ("All even numbers between 1 to %d are :\n",n);
count=1;
while (count<=n)
{
if ( count%2==0)
printf ("%d\t" ,count );
count++;
}
	return	0;
}

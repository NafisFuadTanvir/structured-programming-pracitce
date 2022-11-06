#include<stdio.h>
int main()
{
char *months[]= {"january","february","march","april","may","june",
"julay","august","septembar","nobemver","december"};

int daysinmonth[]= {31,28,30,30,31,30,30,30,31,30,30,31};

int i,j;
for(i=0;i<=12;i++){
printf("\n\n...........%s...........\n\n",months[i]);
for(j=1;j<i;j++){

    printf("\n\n...%d...\n\n", j);
}
}

}
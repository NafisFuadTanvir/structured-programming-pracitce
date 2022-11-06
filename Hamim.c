#include <stdio.h>
int main (){

int  n,i,j;
scanf("%d",&n);
for (i=1;i<=n;i++){
 for(j=1;j<=10;j++){
    printf("%d X %d = %d\n",i,j,i*j);

 }
}

return 0;
}


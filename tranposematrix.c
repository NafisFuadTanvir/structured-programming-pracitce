#include<stdio.h>
int main()
{
int a[20][20],transpose[20][20],row,col,i,j;

printf("enter the number for row and column: ");

scanf("%d %d",&row,&col);

printf("scan the a matrix:\n ");

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
    printf("a[%d][%d] = ",i,j);
    scanf("%d",&a[i][j]);
}
printf("\n");

}

for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {

        transpose[j][i]=a[i][j];
    }
    
}
printf("print the a matrix:\n ");

for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
  
    printf("%d ",a[i][j]);
}
printf("\n");

}

printf("print the transpose matrix matrix:\n ");

for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
{
  
    printf("%d ",transpose[i][j]);
}
printf("\n");

}






}



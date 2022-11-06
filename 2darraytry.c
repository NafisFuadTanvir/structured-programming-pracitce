#include<stdio.h>
int main()
{
int a[30][30],b[30][30],i,j,row,col,min[30][30];

printf("enter the number for rows and columns :-\n");

scanf("%d%d",&row,&col);

printf(" scan the number for a: \n");

for(i=0;i<row;i++)
{

for(j=0;j<col;j++)
{

printf("a[%d][%d] = ",i,j);

scanf("%d",&a[i][j]);

}
printf("\n");
}

printf(" scan the number for b: \n");

for(i=0;i<row;i++)
{

for(j=0;j<col;j++)
{

printf("b[%d][%d] = ",i,j);

scanf("%d",&b[i][j]);

}
printf("\n");
}


printf("print the numbers for a:---\n");
for(i=0;i<row;i++)
{

for(j=0;j<col;j++)

{

printf("%d ",a[i][j]);

}
printf("\n");
}

printf("print the numbers for b:---\n");

for(i=0;i<row;i++)
{

for(j=0;j<col;j++)
{

printf("%d ",b[i][j]);

}
printf("\n");
}

for(i=0;i<row;i++)
{

for(j=0;j<col;j++)
{

min[30][30]= a[30][30] - b[30][30];
}
printf("\n");
}

for(i=0;i<row;i++)
{
    for(j=0;j<col;j++)
    {

        printf("%d   ", min[i][j]);
    }
    printf("\n");
}





}
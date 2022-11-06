#include<stdio.h>
int main()
{

int nafis[4][3],i,j,sifat[4][3],sum[4][3];

printf("enter the number for nafis: \n");

for(i=0;i<4;i++)
{

for(j=0;j<3;j++)
{

printf("nafis[%d][%d] =", i,j);

scanf("%d",&nafis[i][j]);

}

printf("\n");

}

 printf("Nafis = \n");

for(i=0;i<4;i++)
{

for(j=0;j<3;j++)
{

printf("%d ",nafis[i][j]);

}

printf("\n");


}  


printf("enter the number for sifat: \n");

for(i=0;i<4;i++)
{

for(j=0;j<3;j++)
{

printf("sifat[%d][%d] =", i,j);

scanf("%d",&sifat[i][j]);

}

printf("\n");

}

 printf("sifat = \n");

for(i=0;i<4;i++)
{

for(j=0;j<3;j++)
{

printf("%d ",sifat[i][j]);

}

printf("\n");


} 

for(i=0;i<4;i++)
{

for(j=0;j<3;j++)
{

sum[i][j]= nafis[i][j] + sifat[i][j];

}
}
for(i=0;i<4;i++)
{

for(j=0;j<3;j++)
{

printf("%d ",sum[i][j]);

}
printf("\n");
}
}
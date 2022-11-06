#include<stdio.h>

double triangle_area(double b,double h)
{

    return 0.5*b*h;
}


int main()
{

double base,height,area;

printf("enter the number for base: - \n");

scanf("%lf",&base);

printf("enter the number for height: - \n");

scanf("%lf",&height);


area= triangle_area(base,height);

printf("AREA =%.2lf",area);

}
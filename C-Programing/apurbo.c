#include<stdio.h>
#include<math.h>


int main()
{
    double pie=3.1416,r,h,v;

    printf("Enter the value of radius and height:");

    scanf("%lf%lf",&r,&h);

    v=(pie*pow(r,4)*h)/6;

    printf("Volume=%0.3lf",v);

    return 0;
}

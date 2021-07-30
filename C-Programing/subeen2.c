#include<stdio.h>

int main()
{
    double a = 10.253, b = 5.252, sum, min;

    sum = a + b;
    min = a - b;

    printf("The addition of a and b is %lf and substraction a and b is %.3lf", sum, min);

    return 0;
}
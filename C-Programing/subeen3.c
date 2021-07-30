#include<stdio.h>

int main()
{
    double a, b, sum, sub;
    printf("Enter a real number: ");
    scanf("%lf", &a);
    
    printf("Enter another real number: ");
    scanf("%lf", &b);

    sum = a + b;
    sub = a - b;

    printf("Addition: %lf and Substraction: %lf", sum, sub);
    
    return 0;
}
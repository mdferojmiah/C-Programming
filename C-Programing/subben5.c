#include<stdio.h>
int main()
{
    double num1, num2, add, sub, mul, div;
    char plus = '+', minus = '-', into = '*', devide = '/';

    printf("Please enter a number: ");
    scanf("%lf", &num1);
    
    printf("Please enter another number: ");
    scanf("%lf", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("%.3lf %c %.3lf = %.3lf\n", num1, plus, num2, add);
    printf("%.3lf %c %.3lf = %.3lf\n", num1, minus, num2, sub);
    printf("%.3lf %c %.3lf = %.3lf\n", num1, into, num2, mul);
    printf("%.3lf %c %.3lf = %.3lf\n", num1, devide, num2, div);
    
    return 0;
}
#include <stdio.h>

double sum(double a, double b, double c);

int main() {
    double a, b, c, add;

    printf("Enter the value of a: ");
    scanf("%lf", &a);

    printf("Enter the value of b: ");
    scanf("%lf", &b);

    printf("Enter the value of c: ");
    scanf("%lf", &c);

    add = sum(a, b, c);

    printf("The summation is = %.2lf\n", add);
    
    return 0;
}

double sum(double a, double b, double c){
    double sum = a + b + c;
    return sum;
}
#include<stdio.h>

int main() {
    float a = 5.5, b = 3.1415926, add = a + b, sub = a - b, into = a * b, div = a / b;

    printf("%f + %f = %f\n", a, b, add);
    printf("%f - %f = %f\n", a, b, sub);
    printf("%f * %f = %f\n", a, b, into);
    printf("%f / %f = %f\n", a, b, div);
    return 0;
}
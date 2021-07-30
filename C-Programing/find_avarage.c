#include <stdio.h>

double find_ava(double a, double b);

int main() {
    double a, b, ava;
    scanf("%lf %lf", &a, &b);

    ava = find_ava(a, b);
    printf("%.3lf\n", ava);

    return 0;
}

double find_ava(double a, double b){
    double ava = (a + b) / 2;
    return ava;
}
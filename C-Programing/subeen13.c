#include <stdio.h>
int main() {
    double f, c;

    printf("Enter tempareture in celsious: ");
    scanf("%lf", &c);

    f = (c * 1.8) + 32;

    printf("Tempareture in farenheit: %.2lf\n", f);

    return 0;
}
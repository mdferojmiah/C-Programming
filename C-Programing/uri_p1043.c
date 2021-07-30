#include <stdio.h>

int main(){
    //uri problem 1043

    double a, b, c, perimetro, area;
    scanf("%lf %lf %lf", &a, &b, &c);

    if ((a + b) > c && (b + c) > a && (c + a) > a) {
        perimetro = a + b + c;
        
    }

    return 0;
}
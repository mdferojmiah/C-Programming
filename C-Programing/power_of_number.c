#include <stdio.h>
double p(double x, int y)
{
    if(y == 0)
        return 1;
    else if(y > 0)
        return x * p(x, y - 1);
    else
        return 1 / p(x, -y);
}
int main()
{
    double base, re;
    int power;
    printf("Base: ");
    scanf("%lf", &base);
    printf("Power: ");
    scanf("%d", &power);
    re = p(base, power);
    printf("%.2lf ^ %d = %.4lf\n", base, power, re);
    return 0;
}

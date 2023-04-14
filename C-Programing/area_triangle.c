#include <stdio.h>
#include <math.h>
#define PI 3.1416
int main()
{
    double r, vol;
    scanf("%lf", &r);

    vol = PI * pow(r, 3);

    printf("Volume = %.3lf\n", vol);
    return 0;
}

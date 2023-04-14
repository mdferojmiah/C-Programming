#include <stdio.h>
#include <math.h>

int main()
{
    long long int n, m, a, total;
    scanf("%lld %lld %lld", &n, &m, &a);

    double height, length;

    height = ceil((double)n / (double)a);
    length = ceil((double)m / (double)a);

    total = height*length;
    printf("%lld\n", total);

    return 0;
}

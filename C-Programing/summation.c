#include <stdio.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum = sum + i;

    printf("Summation of first %dth integer: %d\n", n, sum);
    return 0;
}

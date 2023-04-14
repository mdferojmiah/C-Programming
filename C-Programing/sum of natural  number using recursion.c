#include <stdio.h>
int sumNatural(int low, int upper)
{
    if(low == upper)
        return low;
    else
        return low + sumNatural(low +1, upper);
}
int main()
{
    int low, upper;
    scanf("%d %d", &low, &upper);
    int sum = sumNatural(low, upper);
    printf("Sum of natural number from %d to %d = %d\n", low, upper, sum);
    return 0;
}

#include<stdio.h>

int digitSum(int n)
{
    int sum = 0;
    if (n < 10)
        return n;
    else
        return sum*10 + (n%10) + digitSum(n/10);
}
int main()
{
    int x, y;
    scanf("%d", &x);

    y = digitSum(x);
    printf("%d\n", y);

    return 0;
}

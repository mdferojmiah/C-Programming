#include <stdio.h>
int qube(int a)
{
    return a*a*a;
}
int main()
{
    int x, r;
    scanf("%d", &x);
    r = qube(x);
    printf("Qube of %d is %d\n", x, r);
    return 0;
}

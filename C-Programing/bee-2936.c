#include<stdio.h>

int main()
{
    int n1, n2, n3, n4, n5;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    printf("%d\n", n1*300 + n2*1500 + n3*600 + n4*1000 + n5*150 + 225);

    return 0;
}

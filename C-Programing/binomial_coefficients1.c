#include <stdio.h>
int fact(int x)
{
    int fact = 1;
    for (int i = 1; i <= x; i++){
        fact = fact*i;
    }
    return fact;
}
int main()
{

    int x, i, n, k, c;
    scanf("%d", &x);

    for(i = 0; i < x; i++){
        scanf("%d %d",&n, &k);
        c = fact(n)/(fact(k)*fact(n-k));
        printf("%d\n", c);
    }

    return 0;
}

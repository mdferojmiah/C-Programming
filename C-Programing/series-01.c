#include <stdio.h>
int main()
{
    int n, sum = 1;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++){
        printf("%d\n", sum);
        sum = sum + i;
    }
    return 0;
}

#include <stdio.h>
int main()
{
    int n, i;
    scanf("%d", &n);

    for(i = n - 1; i > 0; i--){
        n = n*i;
    }
    printf("%d\n", n);

    return 0;
}

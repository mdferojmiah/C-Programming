#include <stdio.h>

int main()
{
    int n, i, td = 0;
    scanf("%d", &n);
    int t[n], v[n], d[n];

    for(i = 0; i < n; i++){
        scanf("%d %d", &t[i], &v[i]);
    }

    for(i = 0; i < n; i++){
        td = td + v[i] * t[i];
    }

    printf("%d\n", td);
    return 0;
}

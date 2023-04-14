#include <stdio.h>

int main()
{
    int n, i, count = 0;
    scanf("%d", &n);
    int arrey[n];

    for(i = 0; i < n; i++){
        scanf("%d", &arrey[i]);
    }

    for(i = 0; i < n; i++){
        if ((i >= 1) && (arrey[i] == arrey[i - 1])) {
            continue;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}

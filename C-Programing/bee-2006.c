#include <stdio.h>

int main()
{
    int T, i, count = 0;
    int tests[5];

    scanf("%d", &T);
    for(i = 0; i <= 4; i++){
        scanf("%d", &tests[i]);
    }

    for (i = 0; i <= 4; i++){
        if(T == tests[i]){
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

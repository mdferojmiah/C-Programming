#include <stdio.h>
int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);
    char action[10];

    for(i = 0; i < m; i++){
        scanf("%s", action);
        if(action[0] == 'f'){
            n = n + 1;
        }
        else if(action[0] == 'c'){
            n = n - 1;
        }
    }

    printf("%d\n", n);

    return 0;
}


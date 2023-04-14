#include <stdio.h>

int main()
{
    int n, q = 0;
    scanf("%d", &n);

    int qus[3];
    for (int i = 0; i < n; i++){
        scanf("%d %d %d", &qus[0], &qus[1], &qus[2]);
        int c = 0;

        for(int j = 0; j < 3; j++){
            if (qus[j] == 1)
                c++;
        }
        if (c >= 2)
            q++;
    }

    printf("%d\n", q);
    return 0;
}

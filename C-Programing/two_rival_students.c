#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, x, a, b, i;
    scanf("%d", &t);

    for(i = 1; i <= t; i++){
        scanf("%d %d %d %d", &n, &x, &a, &b);
        if ((a + b) <= n){
            if (a > b){
                a = a + x;
            }
            else if(a < b){
                b = b + x;
            }
        }
        printf("%d\n", abs(a - b));
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i, temp, total = 1;
    scanf("%d", &n);
    int cans[n], arrenge[n];

    for(i = 0; i < n; i++){
        scanf("%d", &cans[i]);
    }

    temp = cans[0];
    for(i = 0 ; i < n; i++){
        if (temp < cans[i]){
            temp = cans[i];
            total = total + temp*2;
        }
        arrenge[i] = i + 1;
    }
    printf("%d\n", total);

    for(i = 0; i < n; i++){
        printf("%d ", arrenge[i]);
    }

    return 0;
}

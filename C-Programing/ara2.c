#include <stdio.h>

int main(){
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, tem[10];

    for (i = 0, j = 9; i < 10; i++, j--){
        tem[j] = ara[i];
    }

    for (i = 0; i < 10; i++){
        printf("%d\n", tem[i]);
    }

    return 0;
}
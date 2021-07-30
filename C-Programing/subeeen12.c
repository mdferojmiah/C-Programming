#include <stdio.h>
int main(){
    int i = 1, n, sum = 0;

    scanf("%d", &n);
    for ( ; i <= n; i++){
        if (i % 2 != 0){
            sum = sum+i;
        }
        
    }

    printf("the summation is %d\n", sum);

    return 0;
}
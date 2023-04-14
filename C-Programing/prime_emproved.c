#include <stdio.h>
#include <math.h>
int main()
{
    int n, c = 0;

    scanf("%d", &n);

    for (int i = 2; i <= sqrt(n); i++){
        if (n == 0 || n == 1)
            c = 1;

        if (n%i == 0)
            c = 1;
    }

    if (c >= 1){
        printf("Not prime!\n");
    }
    else
        printf("Prime.\n");

    return 0;
}

#include <stdio.h>

int main()
{
    long long int n;
    scanf("%d", &n);

    while(n  > 1)
    {
        printf("%lld ", n);

        if(n%2 == 0){
            n = n/2;
        }
        else{
            n = n*3 + 1;
        }
    }

    printf("%lld\n", n);

    return 0;
}

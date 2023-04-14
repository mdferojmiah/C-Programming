#include <stdio.h>
int main()
{
    int n, m, operation, temp1, temp2, count = 0;
    scanf("%d %d", &n, &m);
    temp1 = n;
    temp2 = m;

    while (n <= m){
        operation = n;
        start: count++;
        while(operation != 1){
            if(operation%2 != 0){
                operation = 3*operation +1;
            }
            else
                operation = operation/2;
            goto start;
        }

        n++;
    }

    printf("%d %d %d\n", temp1, temp2, count);

    return 0;
}

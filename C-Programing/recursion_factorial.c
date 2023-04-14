#include <stdio.h>

int f_calls = 0;
int factorial(int n)
{
    if(n == 0){
        return 1;
    }
    f_calls++;
    return n * factorial(n - 1);
}

int main()
{
    int n;
    printf("Factorial of: ");
    scanf("%d", &n);

    if (n < 0){
        printf("Undefined\n");
        return 0;
    }

    printf("Factorial of %d is %d\n", n, factorial(n));
    printf("The function has been called %d times.\n", f_calls);

    return 0;
}

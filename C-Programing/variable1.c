#include <stdio.h>

int main() {
    int a = 20, b = 10, add = a + b, sub = a - b, into = a * b, div = a / b;

    printf("%d plus %d = %d\n", a,b,add);
    printf("%d minus %d = %d\n", a,b,sub);
    printf("%d into %d = %d\n", a,b,into);
    printf("%d by %d = %d\n", a,b,div);
    return 0;
}
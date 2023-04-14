#include <stdio.h>

int main() {

    int i, j;

    printf("I=0 J=1\n");
    printf("I=0 J=2\n");
    printf("I=0 J=3\n");

    for (i = 1; i <= 10; i++){
        printf("I=%.1f J=%.1f\n", i/5.0, 1 + (i/5.0));
        printf("I=%.1f J=%.1f\n", i/5.0, 2 + (i/5.0));
        printf("I=%.1f J=%.1f\n", i/5.0, 3 + (i/5.0));
    }

    return 0;
}

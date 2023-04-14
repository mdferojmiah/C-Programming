#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    if(n <= 100 && n>= 86){
        printf("A\n");
    }
    else if(n <= 85 && n>= 61){
        printf("B\n");
    }
    else if(n <= 60 && n>= 36){
        printf("C\n");
    }
    else if(n <= 35 && n>= 1){
        printf("D\n");
    }
    else {
        printf("E\n");
    }

    return 0;
}

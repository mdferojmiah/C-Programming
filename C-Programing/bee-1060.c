#include <stdio.h>

int main()
{
    int i, count = 0;
    float input[6];

    for(i = 0; i < 6; i++){
        scanf("%f", &input[i]);
    }

    for(i = 0; i < 6; i++){
        if (input[i] > 0){
            count++;
        }
    }

    printf("%d valores positivos\n", count);

    return 0;
}

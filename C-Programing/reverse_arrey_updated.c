#include <stdio.h>

int  main()
{
    int ara[10] = {10,20,30,40,50,60,70,80,90,100};
    int temp, i, j;

    for (i = 0, j = 9; i < 5; i++, j--){
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }

    for(i = 0; i < 10; i++){
        printf("%d\n", ara[i]);
    }

    return 0;
}

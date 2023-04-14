#include <stdio.h>

int main()
{
    int start, end, played;
    scanf("%d %d", &start, &end);

    if(start > end){
        played = 24 - start + end;
    }
    else if (start < end){
        played = end - start;
    }
    else{
        played = 24;
    }

    printf("O JOGO DUROU %d HORA(S)\n", played);

    return 0;
}

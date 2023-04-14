#include <stdio.h>

int main() {

    int taka, note;
    scanf("%d", &taka);

    //for 100 taka
    note = taka / 100;
    printf("%d nota(s) de R$ 100,00\n", note);
    taka = taka - note*100;

    //for 50 taka
    note = taka / 50;
    printf("%d nota(s) de R$ 50,00\n", note);
    taka = taka - note*50;

    //for 20 taka
    note = taka / 20;
    printf("%d nota(s) de R$ 20,00\n", note);
    taka = taka - note*20;

    //for 10 taka
    note = taka / 10;
    printf("%d nota(s) de R$ 10,00\n", note);
    taka = taka - note*10;

    //for 5 taka
    note = taka / 5;
    printf("%d nota(s) de R$ 5,00\n", note);
    taka = taka - note*5;

    //for 2 taka
    note = taka / 2;
    printf("%d nota(s) de R$ 2,00\n", note);
    taka = taka - note*2;

    //for 1 taka
    note = taka;
    printf("%d nota(s) de R$ 1,00\n", note);

    return 0;
}

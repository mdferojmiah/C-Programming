#include <stdio.h>

int main()
{
    int taka, cal;
    scanf("%d", &taka);

    printf("%d\n", taka);

    cal = taka / 100;
    printf("%d nota(s) de R$ 100,00\n", cal);
    taka = taka - cal*100;

    cal = taka / 50;
    printf("%d nota(s) de R$ 50,00\n", cal);
    taka = taka - cal*50;

    cal = taka / 20;
    printf("%d nota(s) de R$ 20,00\n", cal);
    taka = taka - cal*20;

    cal = taka / 10;
    printf("%d nota(s) de R$ 10,00\n", cal);
    taka = taka - cal*10;

    cal = taka / 5;
    printf("%d nota(s) de R$ 5,00\n", cal);
    taka = taka - cal*5;

    cal = taka / 2;
    printf("%d nota(s) de R$ 2,00\n", cal);
    taka = taka - cal*2;

    cal = taka;
    printf("%d nota(s) de R$ 1,00\n", cal);

    return  0;
}

#include <stdio.h>

int main()
{
    double input;
    int note, coin, cal;
    scanf("%lf", &input);

    note = input;
    printf("NOTAS:\n");
    cal = note / 100;
    printf("%d nota(s) de R$ 100.00\n", cal);
    note = note - cal*100;

    cal = note / 50;
    printf("%d nota(s) de R$ 50.00\n", cal);
    note = note - cal*50;

    cal = note / 20;
    printf("%d nota(s) de R$ 20.00\n", cal);
    note = note - cal*20;

    cal = note / 10;
    printf("%d nota(s) de R$ 10.00\n", cal);
    note = note - cal*10;

    cal = note / 5;
    printf("%d nota(s) de R$ 5.00\n", cal);
    note = note - cal*5;

    cal = note / 2;
    printf("%d nota(s) de R$ 2.00\n", cal);
    note = note - cal*2;


    printf("MOEDAS:\n");
    cal = note;
    printf("%d moeda(s) de R$ 1.00\n", cal);

    note = input;
    input = input - note;
    coin = input*100;

    cal = coin / 50;
    printf("%d moeda(s) de R$ 0.50\n", cal);
    coin = coin - cal*50;

    cal = coin / 25;
    printf("%d moeda(s) de R$ 0.25\n", cal);
    coin = coin - cal*25;

    cal = coin / 10;
    printf("%d moeda(s) de R$ 0.10\n", cal);
    coin = coin - cal*10;

    cal = coin / 5;
    printf("%d moeda(s) de R$ 0.05\n", cal);
    coin = coin - cal*5;

    cal = coin;
    printf("%d moeda(s) de R$ 0.01\n", cal);

    return  0;
}


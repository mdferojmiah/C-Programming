#include <stdio.h>
int main()
{
    double p1[2],p2[2];
    int i,j;
    double rem1,rem2,pay;
    for(i=0; i<=2; i++)
    {
        scanf("%lf",&p1[i]);
    }
    for(j=0; j<=2; j++)
    {
        scanf("%lf",&p2[j]);
    }
    rem1 = p1[1]*p1[2];
    rem2 = p2[1]*p2[2];

    pay = rem1+rem2;
    printf("VALOR A PAGAR: R$ %.2f\n",pay);

    return 0;
}

#include<stdio.h>
int main()
{
    double a1, a2, b1, b2, c1, c2, x , y, temp;

    printf("This programme is for solving (a1x + b1y = c1, a2x + b2y = c2) these type of equation.\n");

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    temp = a1*b2 - a2*b1;

    if ((int) temp == 0){
        printf("Value of x and value of y can not be determined!\n");
    }
    else{
        x = (b2*c1 - b1*c2)/temp;
        y = (a1*c2 - a2*c1)/temp;

        printf("x = %.2lf, y = %.2lf\n", x, y);
    }
    
    return 0;
}
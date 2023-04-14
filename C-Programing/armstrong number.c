/*Program to check armstrong numbers using function*/
#include <stdio.h>
#include <math.h>
int isArmstrong(int a)
{
    int original, lastDigit, sum = 0;
    int digits = (int)log10(a) + 1;
    original = a;
    while(a > 0){
        lastDigit = a % 10;
        sum = sum + round(pow(lastDigit, digits));
        a = a / 10;
    }
    return (original == sum);
}
int main()
{
    int x;
    scanf("%d", &x);
    if(isArmstrong(x))
        printf("Armstong Number\n");
    else
        printf("Not an Armstong Number\n");
    return 0;
}

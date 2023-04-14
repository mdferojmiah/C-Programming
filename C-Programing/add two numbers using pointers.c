#include <stdio.h>
int main()
{
    int num1, num2, div;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter any two numbers: ");
    scanf("%d%d", ptr1, ptr2);
    div = *ptr1 / *ptr2;
    printf("Divisor = %d\n", div);
    return 0;
}

#include<stdio.h>

int main() {
    int a, b, add;

    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Enter a number: ");
    scanf("%d", &b);

    add = a + b;
    
    printf("Frist Number: %d and the secound number: %d\n", a,b);
    printf("Sum = %d\n", add);


    return 0;
}
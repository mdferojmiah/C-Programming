#include <stdio.h>
union MyUnion {
    int num1;
    float num2;
};
int main()
{
    union MyUnion UN;
    printf("Size of union: %ld\n", sizeof(UN));
    UN.num1 = 10;
    printf("Num1: %d, Num2: %f\n", UN.num1, UN.num2);
    UN.num2 = 10.34F;
    printf("Num1: %d, Num2: %f\n", UN.num1, UN.num2);
    return 0;
}


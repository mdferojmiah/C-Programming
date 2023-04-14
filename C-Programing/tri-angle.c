#include <stdio.h>
int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if ((a + b > c || b + c > a || c + a > b) && (a > 0 && b > 0 && c > 0))
    {
        if(a == b && b == c && c == a)
        {
            printf("Somobahu_tribuj\n");
        }
        else if ((a == b || b == c || c == a) && (c != a || a != b || b != c))
        {
            printf("Somo_di_bahu_tribuj\n");
        }
        else if (a != b && b != c && c != a)
        {
            printf("Bisombahu_tribuj\n");
        }
    }
    else
    {
        printf("Invalid value.\n");
    }

    return 0;
}

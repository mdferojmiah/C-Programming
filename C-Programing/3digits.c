#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    switch(a > b){
        case 1:
            switch (a > c){
                case 1:
                    printf("%d is the greatest number!\n", a);
                    break;
                case 0:
                    printf("%d is the greatest number!\n", c);
                    break;
            }
            break;
        case 0:
            switch (c > b){
                case 1:
                    printf("%d is the greatest number!\n", c);
                    break;
                case 0:
                    printf("%d is the greatest number!\n", b);
                    break;
            }
            break;
    }

    return 0;
}

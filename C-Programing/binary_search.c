#include <stdio.h>

int main() 
{
    int ara[] = {
        1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100
    };
    int num, low_index, mid_index, high_index;

    num = 15;
    low_index = 0;
    high_index = 15;

    while(low_index <= high_index) {
        mid_index = (low_index + high_index) / 2;
        if (num == ara[mid_index]){
            break;
        }
        if (num < ara[mid_index]){
            high_index = mid_index - 1;
        }
        else{
            low_index = mid_index + 1;
        }
    }

    if (low_index > high_index){
        printf("%d is not in the array\n", num);
    }
    else{
        printf("%d found in the array. It is the %dth element of the array.\n", ara[mid_index], mid_index);
    }

    return 0;
}
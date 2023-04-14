#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d", &n);
    int start = 0, len = 2*n - 1;
    int end = len - 1;
    int a[end][end];


    // Complete the code to print the pattern.
    while(n != 0){
        for(int i = start; i <= end; i++){
            for(int j = start; j <= end; j++){
                if(i == start || i == end || j == start || j == end){
                    a[i][j] = n;
                }
            }
        }
        start++;
        end--;
        n--;
    }

    for(int i = 0; i < len; i++){
        for(int j = 0; j < len; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }


    return 0;
}


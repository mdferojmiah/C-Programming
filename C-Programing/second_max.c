#include <stdio.h>
int main()
{
    int n, max = 0, max_2 = 0, j;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);

        if(max < arr[i]){
            max = arr[i];
            j = i;
        }
    }
    for (int i = 0; i < n; i++){
        if (i == j)
            i++;
        else{
            if (max_2 < arr[i])
                max_2 = arr[i];
        }
    }
    printf("Max: %d\nSecond Max: %d\n", max, max_2);
    return 0;
}

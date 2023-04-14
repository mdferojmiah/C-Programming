#include <stdio.h>
int main()
{
    int i, n;
    printf("Total students: ");
    scanf("%d", &n);

    int arrey[n];
    for(i = 0;  i < n; i++){
        printf("Roll: %d --> Obtained marks: ", i + 1);
        scanf("%d", &arrey[i]);
    }
    printf("\n\n");
    for(i = 0;  i < n; i++){
        printf("Roll: %d have got %d\n", i + 1, arrey[i]);
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int i, j,groups, texies = 0, sum;
    scanf("%d", &groups);

    int members[groups];
    for(i = 0; i < groups; i++){
        scanf("%d", &members[i]);
    }

    for(i = 0, j = groups - 1; i <= groups/2; i++, j--){
        sum = members[i] + members[j];
        if(sum <= 4){
            texies = texies + 1;
        }
        else if(i = j){
            texies = texies + 1;
        }
        else{
            texies = texies + 2;
        }
    }

    printf("%d\n", texies);

    return 0;
}

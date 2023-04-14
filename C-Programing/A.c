#include <stdio.h>
#include <string.h>

int main()
{
    char input1[100], input2[100], all[100], input3[100];
    int i, j, count[100];
    gets(input1);
    gets(input2);
    gets(all);

    for (i = 0, j = 0; i < strlen(input1); i++, j++){
        input3[j] = input1[i];
    }
    for(i = 0; i < strlen(input2); i++, j++){
        input3[j] = input2[i];
    }
    input3[j] = '\0';

    for(i = 0; i < strlen(input3); i++){
        count[i] = 0;
        for(j = 0; j < strlen(all); j++){
            if(input3[i] == all[j]){
                count[i] = 1;
            }
        }
    }

    for(i = 0; i < strlen(input3); i++){
        if (count[i] == 0){
            printf("NO\n");
            break;
        }
    }


    return 0;
}

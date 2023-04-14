#include <stdio.h>

struct nametype {
    char first[20];
    char last[20];
};

struct student {
    int id;
    struct nametype name;
};

int main()
{
    struct student data[5];

    for(int i = 0; i < 5; i++){
        printf("Enter the ID for student %d: ", i+1);
        scanf("%d", &data[i].id);
        printf("Enter the First Name for student %d: ", i+1);
        scanf("%s", &data[i].name.first);
        printf("Enter the last Name for student %d: ", i+1);
        scanf("%s", &data[i].name.last);

        printf("\n");
    }

    printf("Output: \n\n");

    for(int i = 0; i < 5; i++){
        printf("ID: %d\n", data[i].id);
        printf("Name: %s %s\n", data[i].name.first, data[i].name.last);
    }

    return 0;
}

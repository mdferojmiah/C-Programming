#include <stdio.h>

struct nametype
{
    char first[20];
    char last[20];
};

struct student
{
    int id;
    struct nametype name;
};

int main()
{
    struct student stu[3];

    for(int i = 0; i < 3; i ++){
        printf("Fill the form for member-%d\n", i + 1);
        printf("ID: ");
        scanf("%d", &stu[i].id);
        printf("First Name: ");
        scanf("%s", stu[i].name.first);
        printf("Last Name: ");
        scanf("%s", stu[i].name.last);
    }

    for(int i = 0; i < 3; i ++){
        printf("\n\nInformation about member-%d\n", i + 1);
        printf("ID: %d\n", stu[i].id);
        printf("Full Name: %s %s\n", stu[i].name.first, stu[i].name.last);
    }

    return 0;
}

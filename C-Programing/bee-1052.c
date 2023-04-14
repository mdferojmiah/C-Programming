#include <stdio.h>
int main()
{
    char *months[12] =
    {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    int input;
    scanf("%d", &input);

    printf("%s\n", months[input - 1]);
    return 0;
}

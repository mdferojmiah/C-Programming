#include <stdio.h>
int main()
{
    int acc_num[10], contact[11];
    char name[100], address[100];
    int i;

    printf("*****User Sign Up From*****\n");

    printf("Enter your account number: ");
    scanf("%d", &acc_num[100]);

    printf("Enter your nickname: ");
    scanf("%s", &name);

    printf("Enter your address: ");
    scanf("%s", &address);

    printf("Enter your 11 digit phone number: ");
    scanf("%d", &contact[11]);

    printf("\n\n~Account has been created!\n");
    printf("\n\n*****User Details*****\n");
    printf("\nAccount number: %d\nName: %s\nAdress: %s\nPhone number:(+880) %d\n", acc_num[100], name, address, contact[11]);

    return 0;
}

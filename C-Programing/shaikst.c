#include<stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d",&year);
    switch(year%400)
    {
    case 1:
        printf("Leap year.");
        break;

    case 0:
        break;
    }

    switch(year%100)
    {
    case 1:
        printf("Not Leap year.");
        break;

    case 0:
        break;
    }

    switch(year%4)
    {
    case 1:
        printf("Leap year.");
        break;

    case 0:
        break;
    }
   switch(year)
    default:
        {
            printf("Not leap year.");
            break;
        }
}

#include<stdio.h>
int main()
{
    double loan_amount, loan_period, interest, total_pay_amount, pay_per_month;

    printf("Enter the loan amount(in Taka): ");
    scanf("%lf", &loan_amount);

    printf("Enter the interest rate(in per centage): ");
    scanf("%lf", &interest);
    
    printf("Enter the time period(year): ");
    scanf("%lf", &loan_period);

    total_pay_amount = loan_amount + ((loan_amount * interest * 5) / 100);
    pay_per_month = total_pay_amount / (loan_period * 12);

    printf("Total pay amount: %.2lf\n", total_pay_amount);
    printf("Monthly pay amount: %.2lf\n", pay_per_month);

    return 0;
}
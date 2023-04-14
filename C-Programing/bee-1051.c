#include <stdio.h>

int main()
{
    float salary, taxes;
    scanf("%f", &salary);

    if (salary >= 0 && salary <= 2000){
        printf("Isento\n");
    }
    else if(salary > 2000){
        if ((salary - 4500) > 0){
            taxes = (salary-4500)*0.28 + (salary - 3000 - (salary - 4500))*0.18 + (salary - 2000 - (salary - 3000 - (salary - 4500))- (salary - 4500))*0.08;
        }
        else if((salary - 3000) > 0){
            taxes = (salary-3000)*0.18 + (salary - 2000 - (salary-3000))*0.08;
        }
        else{
            taxes = (salary - 2000)*0.08;
        }

        printf("R$ %0.2f\n", taxes);
    }

    return 0;
}

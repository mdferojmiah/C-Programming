#include<stdio.h>

int main()
{
    float salary, new_salary, extra;
    int percentage;
    scanf("%f", &salary);


    if(salary>=0 && salary<=400){
        percentage = 15;
        extra = salary*0.15;
        new_salary = salary + extra;
    }
    else if(salary>400 && salary<=800){
        percentage = 12;
        extra = salary*0.12;
        new_salary = salary + extra;
    }
    else if(salary>800 && salary<=1200){
        percentage = 10;
        extra = salary*0.10;
        new_salary = salary + extra;
    }
    else if(salary>1200 && salary<=2000){
        percentage = 7;
        extra = salary*0.07;
        new_salary = salary + extra;
    }
    else if(salary>2000){
        percentage = 4;
        extra = salary*0.04;
        new_salary = salary + extra;
    }

    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %d %%\n", new_salary, extra, percentage);

    return 0;
}

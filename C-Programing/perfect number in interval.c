/*Program to print perfect numbers in given
range using functions*/

#include <stdio.h>
int isperfect(int a)
{
    int sum = 0;

    for(int i = 1; i < a; i++){
        if(a%i == 0)
            sum += i;
    }
    if(sum == a)
        return 1;
    else
        return 0;
}
void printPerfect(int s, int e)
{
    while (s <= e){
        if(isperfect(s))
            printf("%d ", s);
        s++;
    }
}
int main()
{
    int start, end;
    scanf("%d %d", &start, &end);
    printPerfect(start, end);
    return 0;
}

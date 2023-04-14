#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c,s,n,m;
    printf("Enter three lentgh of ");
    scanf("%d%d%d",&a,&b,&c);
    /*s=(sqrt(a*a +b*b)==c);
    m=(sqrt(a*a +c*c)==b);
    n=(sqrt(a*a +c*c)==b);*/
    if (sqrt(a*a +c*c)==b)
    {
        printf("This is tringle ");
    }
    else  if (sqrt(a*a +b*b)==c)
    {
        printf("This is tringle ");
    }
    else  if (sqrt(a*a +c*c)==b)
    {
        printf("This is tringle ");
    }
    else
    {
        printf("This is not a teingle");
    }
    return 0;
}

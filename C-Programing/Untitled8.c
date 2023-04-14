#include<stdio.h>
int main()
{
    int i,s=0,k=0,f,z;
    printf("Printing the series \n");
    for(i=0; i<=20; i++)
    {
        k=k+i;
        f=k-i;
        z=f+i+1;
        printf("%d\n",z);
    }
    return 0;
}

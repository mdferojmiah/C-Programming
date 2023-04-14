#include<stdio.h>
int main()
{
    int n,r,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(a[i]>a[j])
            {
                r=a[i];
                a[i]=a[j];
                a[j]=r;
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j)
            {
                j++;
            }
            r=a[i]+a[j];
            if(r%2==0)
            {
                c++;
                goto s;
            }
        }
    }
    s:
        {
            printf("%d\n",r);
            return 0;
        }
    if(c==0)
    {
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                r=a[i]+0;
                goto s;
            }
        }
    }

}

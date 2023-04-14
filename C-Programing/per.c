#include<stdio.h>
int main()
{
    int x[100];
    int n,i,j,d,e;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&x[i]);
    }
    d=0;
    for(i=n-2; i>=0; i--)
    {
        if(x[i]>x[i+1])
        {
            d=i;
            break;
        }
    }
    e = n - 1;
    for ( i=d+1; i<n; i++ )
    {
        if ( x[d] < x[i] )
        {
            e = i - 1;
            break;
        }
    }
    i = x[d];
    x[d] = x[e];
    x[e] = i;

    for ( i=1; i<=(n-d-1)/2; i++ )
    {
        j = x[d+i];
        x[d+i] = x[n-i];
        x[n-i] = j;
    }

    for ( i=0; i<n; i++ )
    {
        printf( "%d ", x[i] );
    }
    printf("\n");
    return 0;
}

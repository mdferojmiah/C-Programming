#include<stdio.h>
int main()
{
    int count=0,high=0,n;
    scanf("%d",&n);
    char s[n];
    for(int i=0; i<n; i++)
    {
        scanf("%c",&s[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(s[i]!=s[i-1])
        {
            if(high<count)
            {
                high=count;
            }
            count=0;
        }
        count++;
    }
    if(high<count)
    {
        high=count;
    }
    printf("%d",high);
}

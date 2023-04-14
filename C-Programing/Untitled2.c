#include<stdio.h>
#include<string.h>
int main()
{
    int t,r=0,m;
    scanf("%d",&t);
    char s[20],s1[20],temp;
    while(t--)
    {
        scanf("%s",s);
        m=strlen(s);
        for(int i=0; i<m; i++)
        {
            s1[i]=s[i];
        }
        for(int i=0; i<m; i++)
        {
            if(s[i]!=s1[m-i-1])
            {
                r++;
            }
        }
        if(r==0)
        {
            if(m<=7)
            {
                printf("Case #3: %s\n",s);
            }
            else
            {
                printf("Case #2: %c%d%c\n",s[0],m-2,s[m-1]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
        r=0;
    }
}

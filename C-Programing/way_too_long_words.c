#include <stdio.h>
#include <string.h>
int main()
{
    int len;
    char ch[100];
    scanf("%s", ch);
    len = strlen(ch);
    if (len > 10)
        printf("%c%d%c\n", ch[0], len - 2, ch[len-1]);
    else
        printf("%s\n", ch);
    return 0;
}

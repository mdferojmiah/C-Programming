#include <stdio.h>

int main()
{
   int n, x = 0;
   scanf("%d", &n);

   char word[5];

   for(int i = 0; i <= n; i++){
        gets(word);
        if(word[1] == '+')
            x++;
        else if(word[1] == '-')
            x--;
   }
   printf("%d\n", x);
   return 0;
}

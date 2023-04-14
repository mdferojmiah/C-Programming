#include<stdio.h>
#include<string.h>
void main()
{
     char word[100];
     int i, x, c = 0, p;
     scanf("%s", word);
     x=strlen(word);
     for(i=0; i<x; i++){
         if(word[i]=='a'){
             p = i+1;
             c = 1;
         }
     }
     if(c != 0){
         printf("%d\n", p);
     }
     else{
         printf("-1\n");
     }
}

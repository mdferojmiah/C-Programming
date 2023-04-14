#include <stdio.h>
#include <string.h>
int main()
{
    char ara1[25], ara2[25], ara3[25];
    scanf("%s", ara1);
    scanf("%s", ara2);
    scanf("%s", ara3);

    if(strcmp(ara1, "vertebrado") == 0){
        if(strcmp(ara2, "ave") == 0){
            if(strcmp(ara3, "carnivoro") == 0){
                printf("aguia\n");
            }

            else if(strcmp(ara3, "onivoro") == 0){
                printf("pomba\n");
            }
        }

        else if(strcmp(ara2, "mamifero") == 0){
            if(strcmp(ara3, "onivoro") == 0){
                printf("homem\n");
            }

            else if(strcmp(ara3, "herbivoro") == 0){
                printf("vaca\n");
            }
        }
    }

    else if(strcmp(ara1, "invertebrado") == 0){
        if(strcmp(ara2, "inseto") == 0){
            if(strcmp(ara3, "hematofago") == 0){
                printf("pulga\n");
            }

            else if(strcmp(ara3, "herbivoro") == 0){
                printf("lagarta\n");
            }
        }

        else if(strcmp(ara2, "anelideo") == 0){
            if(strcmp(ara3, "hematofago") == 0){
                printf("sanguessuga\n");
            }

            else if(strcmp(ara3, "onivoro") == 0){
                printf("minhoca\n");
            }
        }
    }

    return 0;
}

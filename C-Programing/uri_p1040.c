#include <stdio.h>
 
int main() {

    //uri problem 1040

    
    double n1, n2, n3, n4, inexam, media, inexam_media;
    
    scanf("%lf %lf %lf %lf", &n1, &n2, &n3, &n4);
    
    media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
    
    printf("Media: %.1lf\n", media);
    
    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    }
    else if (media >= 5.0 && media <= 6.9) {
        printf("Aluno em exame.\n");
        
        scanf("%lf", &inexam);
        printf("Nota do exame: %.1lf\n", inexam);
        
        inexam_media = (media + inexam) / 2;
        
        if (inexam_media >= 5.0) {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", inexam_media);
        }
        else {
             printf("Aluno reprovado.\n");
             printf("Media final: %.1lf\n", inexam_media);
        }
    }
    
    return 0;
}
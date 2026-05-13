#include <stdio.h>

int main () {

    float nota1, nota2, nota3, media;

    printf("Digite nota 1: \n");
    scanf("%f", &nota1);
    printf("Digite nota 2: \n");
    scanf("%f", &nota2);
    printf("Digite nota 3: \n");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("Media final: %.1f\n", media);

    if (media >= 9) {
        printf("Conceito A.\nAPROVADO.");
    } else if (media >= 7.5 && media < 9) {
        printf("Conceito B.\nAPROVADO");
    } else if (media >= 6 && media < 7.5) {
        printf("Conceito C.\nAPROVADO");
    } else if (media >= 4 && media < 6) {
        printf("Conceito D.\nREPROVADO");
    } else {
        printf("Conceito E.\nREPROVADO");
    }

    return 0;

}
#include <stdio.h>

int main() {

    float media;

    printf("Digite a sua media: ");
    scanf("%f", &media);

    if (media >= 7) {
        printf("Aluno aprovado");
    } else if (media >= 4) {
        printf("Aluno esta na final");
    } else {
        printf("Aluno reprovado");
    }

    return 0;
}
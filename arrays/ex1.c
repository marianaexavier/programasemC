#include <stdio.h>

int main() {
    int idade[10], soma=0, media, i;
    for (i=0; i<10; i++) {
        printf("Digite sua idade: ");
        scanf("%d", &idade[i]);
        soma+=idade[i];
    }
    media = soma/10;
    printf("Idades acima da media: ");
    for (i=0; i<10; i++) {
        if (idade[i]>media) {
            printf("%d ", idade[i]);
        }
    }
    return 0;
}
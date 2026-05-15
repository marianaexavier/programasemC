#include <stdio.h>

int main () {
    
    int num, i, maior, posicao;

    maior = -123456;

    for (i=1; i<=10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num);

        if (num>maior) {
            maior = num;
            posicao = i;
        }
    }

    printf("\nMaior numero digtado: %d", maior);
    printf("\n%d numero digitado", posicao);

    return 0;
}
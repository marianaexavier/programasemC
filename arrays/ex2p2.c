#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100

int main() {
    int n = -1, i;
    int cont=0, soma=0;
    int menor, maior;
    float media;


    while (n <= 0 || n > MAX_N) {
        printf("Digite a quantidade de numeros desejada (maximo %d): ", MAX_N);
        scanf("%d", &n);

        if (n <= 0 || n > MAX_N) {
            printf("Numero invalido. Digite entre 1 e %d\n", MAX_N);
        }
    }

    int *num = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("digite um numero inteiro: ");
        scanf("%d", &num[i]);
        soma+=num[i];
        cont++;
    }

    maior = num[0];
    menor = num[0];

    printf("Numeros digitados: ");
    for (i=0; i<n; i++) {
        printf("%d ", num[i]);
        if (num[i] < menor) {
            menor = num[i];
        } if (num[i] > maior) {
            maior = num[i];
        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Maior valor: %d\n", maior);

    media = (float)soma/cont;
    printf("Media dos numeros digitados: %.2f\n", media);

    free(num);

    return 0;
}
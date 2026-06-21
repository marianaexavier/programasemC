#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int maior, menor;
    int indexmaior=0, indexmenor=0;
    float media;

    printf("Digite quantos numeros voce quer ler: ");
    scanf("%d", &n);

    int *num = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &num[i]);
    }

    maior = num[0];
    menor = num[0];
    

    for (i=0; i<n; i++) {
        if(num[i]>maior) {
            maior = num[i];
            indexmaior = i;
        } if (num[i]<menor) {
            menor = num[i];
            indexmenor = i;
        }
    }

    media = ((float)maior + (float)menor)/2;

    printf("Maior valor e seu indice: %d, %d\n", maior, indexmaior);
    printf("Menor valor e seu indice: %d, %d\n", menor, indexmenor);
    printf("Media entre %d e %d: %.2f", maior, menor, media);

    free(num);

    return 0;
}
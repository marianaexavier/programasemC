#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, x;
    int contX=0, j=0;

    printf("Informe a quantidade de valores que voce quer ler: ");
    scanf("%d", &n);

    int *vetor = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

    printf("Digite um valor X qualquer: ");
    scanf("%d", &x);

    for (i=0; i<n; i++) {
        if (vetor[i]==x) {
            contX++;
        }
    }

    int *indiceX = malloc(contX*sizeof(int));

    for (i=0; i<n; i++) {
        if(vetor[i]==x) {
            indiceX[j] = i;
            j++;
        }
    }

    if (contX==0) {
        printf("O valor X digitado nao aparece no vetor composto pelos outros %d valores digitados.\n", n);
    } else {
        printf("O valor X aparece %d vezes no vetor composto pelos outros %d valores digitados nas seguintes posicoes: ", contX, n);
        for (j=0; j<contX; j++) {
            printf("%d ", indiceX[j]);
        }
    }

    free(vetor);
    free(indiceX);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2=0, n3=0, cont=0;
    int i, j=0, k=0;

    printf("Digite quantos valores voce quer ler: ");
    scanf("%d", &n1);

    int *vetor1 = malloc(n1*sizeof(int));

    for(i=0; i<n1; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &vetor1[i]);
    }

    for(i=0; i<n1; i++) {
        if(vetor1[i]>0) {
            n2++;
        } else if (vetor1[i]<0) {
            n3++;
        } else {
            cont++;
        }
    }

    int *vetor2 = malloc(n2*sizeof(int));
    int *vetor3 = malloc(n3*sizeof(int));

    for (i=0; i<n1; i++) {
        if(vetor1[i]>0) {
            vetor2[j] = vetor1[i];
            j++;
        } else if (vetor1[i]<0) {
            vetor3[k] = vetor1[i];
            k++;
        }
    }

    printf("Numero de valores iguais a 0 digitados: %d\n", cont);
    
    printf("Vetor 1: ");
    for (i=0; i<n1; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nVetor 2: ");
    for (j=0; j<n2; j++) {
        printf("%d ", vetor2[j]);
    }

    printf("\nVetor 3: ");
    for (k=0; k<n3; k++) {
        printf("%d ", vetor3[k]);
    }

    free(vetor1);
    free(vetor2);
    free(vetor3);

    return 0;
}
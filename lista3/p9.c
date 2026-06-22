#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;

    printf("Informe o valor de N: ");
    scanf("%d", &n);

    int *A = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("Digite um valor para compor o vetor A: ");
        scanf("%d", &A[i]);
    }

    int *B = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("Digite um valor para compor o vetor B: ");
        scanf("%d", &B[i]);
    }

    int *S = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        S[i] = A[i]+B[i];
    }

    int *D = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        D[i] = A[i]-B[i];
    }

    int *P = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        P[i] = A[i]*B[i];
    }

    printf("Vetor S: ");
    for (i=0; i<n; i++) {
        printf("%d ", S[i]);
    }

    printf("\nVetor D: ");
    for (i=0; i<n; i++) {
        printf("%d ", D[i]);
    }

    printf("\nVetor P: ");
    for (i=0; i<n; i++) {
        printf("%d ", P[i]);
    }

    free(A);
    free(B);
    free(S);
    free(D);
    free(P);
    
    return 0;
}
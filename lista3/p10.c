#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int n, i;
    float distanciaEuclidiana;

    printf("Digite o numero de pontos: ");
    scanf("%d", &n);

    float **matriz = malloc(n*sizeof(float*));

    for (i=0; i<n; i++) {
        matriz[i] = malloc(n*sizeof(float));
    }

    float *x = malloc(n*sizeof(float));
    float *y = malloc(n*sizeof(float));

    for (i=0; i<n; i++) {
        printf("Digite o valor de x e y do ponto %d: ", i);
        scanf("%f %f", &x[i], &y[i]);
    }

    for (i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {
            distanciaEuclidiana = sqrt(pow(x[j]-x[i], 2)+pow(y[j]-y[i], 2));
            matriz[i][j] = distanciaEuclidiana;
        }
    }
    
    for (i=0; i<n; i++) {
        free(matriz[i]);
    }
    free(matriz);
    free(x);
    free(y);

    return 0;
}
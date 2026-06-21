#include <stdio.h>
#include <math.h>

void bhaskara (float A, float B, float C) {
    float delta = (B*B)-4*A*C;
    float raiz1, raiz2;
    if (A==0 || delta<0) {
        printf("Impossivel calcular\n");
    } else {
        raiz1 = (-B+sqrt(delta))/(2*A);
        raiz2 = (-B-sqrt(delta))/(2*A);
    }
    printf("Raizes: %.2f, %.2f", raiz1, raiz2);
}

int main () {
    float A, B, C;
    printf("Digite os coeficientes a, b e c: ");
    scanf("%f %f %f", &A, &B, &C);
    bhaskara(A, B, C);
    return 0;
}
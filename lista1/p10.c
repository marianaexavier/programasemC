#include <stdio.h>
#include <math.h>

int main () {

    double A, B, C, raiz1, raiz2;

    printf("Digite 3 valores reais: ");
    scanf("%lf %lf %lf", &A, &B, &C);

    double delta = (B*B)-4*A*C;

    if (A==0 || delta<0) {
        printf("\nImpossivel calcular");
    } else {
        raiz1 = (-B+sqrt(delta))/(2*A);
        raiz2 = (-B-sqrt(delta))/(2*A);
        printf("\nRaizes: %.5lf %.5lf", raiz1, raiz2);
    }
    return 0;
}
#include <stdio.h>

int main () {

    int distancia;
    float combustivel, consumo;

    printf("\nInforme a distancia toatl percorrida: ");
    scanf("%d", &distancia);
    printf("\nInforme a quantiade de combustivel gasto: ");
    scanf("%f", &combustivel);

    consumo = distancia/combustivel;

    printf("\n%.2f km/l", consumo);

    return 0;
}
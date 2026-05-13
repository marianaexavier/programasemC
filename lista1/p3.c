#include <stdio.h>

int main () {

    float distancia, tempo, velocidade;

    printf("Informe a distancia entre os veiculos: ");
    scanf("%f", &distancia);

    velocidade = 150;

    tempo = (distancia/velocidade)*60;

    printf("%.1f minutos", tempo);

    return 0;
}
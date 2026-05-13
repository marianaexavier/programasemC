#include <stdio.h>

int main () {

    int N, horas, minutos, segundos;

    printf("Informe uma quantidade de tempo em segundos: ");
    scanf("%d", &N);

    horas = N/3600;
    minutos = (N%3600)/60;
    segundos = (N%3600)%60;

    printf("{%d}:{%d}:{%d}", horas, minutos, segundos);

    return 0;
}
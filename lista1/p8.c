#include <stdio.h>

int main() {

    int horaInicio, minutoInicio, horaTermino, minutoTermino, duracaoMinutos;

    printf("Digite o horario do incio do jogo (ex.: 18:30): ");
    scanf("%d:%d", &horaInicio, &minutoInicio);
    printf("Digite o horario de termino do jogo (ex.: 22:30): ");
    scanf("%d:%d", &horaTermino, &minutoTermino);

    int inicioMinutos = (horaInicio*60)+minutoInicio;
    int terminoMinutos = (horaTermino*60)+minutoTermino;

    if (terminoMinutos<inicioMinutos) {
        terminoMinutos += 1440;
    }

    duracaoMinutos = terminoMinutos-inicioMinutos;

    printf("Duracao do jogo em minutos: %d", duracaoMinutos);

    return 0;
}
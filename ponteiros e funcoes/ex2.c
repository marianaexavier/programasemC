#include <stdio.h>

void converte (int hora, int minuto) {
    if (hora<12) {
        printf("Hora no formato 12 horas: %d:%d A.M.", hora, minuto);
    } else {
        hora = hora - 12;
        printf("Hora no formato 12 horas: %d:%d P.M.", hora, minuto);
    }
}

int main() {
    int horas, minutos;

    printf("Digite um horario no formato xx:xx: ");
    scanf("%d:%d", &horas, &minutos);

    converte(horas, minutos);
    return 0;
}
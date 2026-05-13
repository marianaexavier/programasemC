#include <stdio.h>

int main() {

    int vitoria;

    printf("Digite o numero de vitorias do time (1 a 4): ");
    scanf("%d", &vitoria);

    switch (vitoria)
    {
    case 1:
        printf("campeao");
        break;
    case 2:
        printf("bicampeao");
        break;
    case 3:
        printf("tricampeao");
        break;
    case 4:
        printf("tetracampeao");
        break;
    default:
        printf("Número fora do intervalo permitido");
        break;
    }

    return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include "situacao.h"

int main() {
    float nota;
    Situacao situacion;
    
    do {
        printf("Insira uma nota ou digite -1 para encerrar o programa: ");
        scanf("%f", &nota);

        if(nota != -1) {
            situacion = classificar(nota);
            switch (situacion) {
                case APROVADO:
                    printf("APROVADO\n");
                    break;
                case RECUPERACAO:
                    printf("RECUPERACAO\n");
                    break;
                default:
                    printf("REPROVADO\n");
            }
        }

    }while (nota != -1);

    return 0;
}
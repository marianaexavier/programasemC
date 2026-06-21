#include <stdio.h>

int somaImpares(int x, int y) {
    int aux, i, soma;
    soma = 0;
    if (x>y) {
        aux = x;
        x = y;
        y = aux;
    }
    for (i=x+1; i<y; i++) {
        if (i%2 != 0) {
            soma+= i;
        }
    }
    return soma;
}

int main () {
    int X, Y;
    printf("Digite dois valores inteiros separado por espaco: ");
    scanf("%d %d", &X, &Y);
    printf("Soma dos impares dentro do intervalo digitado: %d", somaImpares(X, Y));
}
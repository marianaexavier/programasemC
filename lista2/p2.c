#include <stdio.h>

int somaMultiplos(int inicio, int fim, int k) {
    int soma, i;
    soma = 0;
    for (i=inicio; i<=fim; i++){
        if (i%k == 0) {
            soma+=i;
        }
    }
    return soma;
}

int main () {
    int start, end, K;
    printf("Digite inicio, fim e k separados por espaco: ");
    scanf("%d %d %d", &start, &end, &K);
    printf("Soma dos multiplos de k no intervalo fornecido: %d", somaMultiplos(start, end, K));
    return 0;
}
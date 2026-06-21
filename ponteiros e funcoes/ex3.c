#include <stdio.h>

void escadaNumero (int num) {
    int linha, coluna;
    for (linha=1; linha<num+1; linha++) {
        for(coluna=0; coluna<linha; coluna++) {
            printf("%d", linha);
        }
        printf("\n");
    }
}

int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    escadaNumero(n);
    return 0;
}
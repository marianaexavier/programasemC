#include <stdio.h>

void reduz(int *a, int *b) {
    int cont = 0;
    
    while (*a!=*b) {
    if (*a>*b) {
        *a = *a-*b;
    } else {
        *b = *b-*a;
    }
    cont++;
    }
    printf("N de operacoes: %d\n", cont);
}

int main() {
    int x, y;
    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &x, &y);
    reduz(&x, &y);
    return 0;
}
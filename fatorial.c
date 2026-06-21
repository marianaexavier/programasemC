#include <stdio.h>

int fatorial (int num) {
    int fat = 1, i;

    for (i = 2; i<=num; i++) {
        fat = i*fat;
    }
    return fat;
}

int main () {
    int numero;

    numero = fatorial(3);
    printf("Fatorial de 3: %d", numero);
    return 0;
}
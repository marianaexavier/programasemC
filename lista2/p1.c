#include <stdio.h>

int somaDigitos(int n) {
    if (n<10) {
        return n;
    }
    return n%10 + somaDigitos(n/10);
}

int main () {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Resultado: %d", somaDigitos(num));
    return 0;
}
#include <stdio.h>

int inverte(int n, int acumulador) {
    if (n==0) {
        return acumulador;
    }
    return inverte(n/10, 10*acumulador + (n%10));
}

int ehPalindromo (int n) {
    if (n == inverte(n, 0)) {
        return 1;
    }
    return 0;
}

int main () {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Resultado (0 - nao eh palindromo; 1 - eh palindromo): %d", ehPalindromo(num));
    return 0;
}
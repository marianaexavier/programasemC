#include <stdio.h>

int passos(int n) {
    if (n == 1) {
        return 0;
    }
    if (n%2==0) {
        return 1 + passos(n/2);
    } else {
        return 1 + passos(n-1);
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Resultado: %d", passos(num));
    return 0;
}
#include <stdio.h>

int maior (int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
}
}

int main () {
    int numero1, numero2, numeroMaior;

    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero1);
    printf("\nDigite outro numero inteiro: ");
    scanf("%d", &numero2);

    numeroMaior = maior(numero1, numero2);

    printf("\nO maior numero e: %d", numeroMaior);

    return 0;
}
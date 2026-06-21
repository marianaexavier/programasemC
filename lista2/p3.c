#include <stdio.h>

int somaDiv(int n, int d) {
    if(d==1){
        return 1;
    }
    if (n%d == 0){
        return d + somaDiv(n, d-1);
    } else {
        return somaDiv(n, d-1);
    }
}

int ehPerfeito(int n) {
    if (n<=1){
        return 0;
    }
    if (somaDiv(n, n-1)== n) {
        return 1;
    } else {
        return 0;
    }
    
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Resultado: %d", ehPerfeito(num));
    return 0;
}
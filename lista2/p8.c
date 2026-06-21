#include <stdio.h>

void contaPositivos (int n1, int n2, int n3, int n4, int n5, int n6) {
    int cont, soma, media;
    cont = 0;
    soma = 0;
    if (n1>0){
        cont++;
        soma+=n1;
    } if (n2>0) {
        cont++;
        soma+=n2;
    } if (n3>0) {
        cont++;
        soma+=n3;
    } if (n4>0) {
        cont++;
        soma+=n4;
    } if (n5>0) {
        cont++;
        soma+=n5;
    } if (n6>0) {
        cont++;
        soma+=n6;
    }
    media = soma/cont;
    printf("Quantidade de numeros positivos digitados: %d\n", cont);
    printf("Media dos numeros positivos: %d\n", media);
}

int main () {
    int num1, num2, num3, num4, num5, num6;
    printf("Digite 6 numeros inteiros separados por espaco: ");
    scanf("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
    contaPositivos(num1, num2, num3, num4, num5, num6);
}
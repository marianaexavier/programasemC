#include <stdio.h>

int main () {

    int n1, n2, n3;

    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, & n3);

    if (n1>n2) {
        if (n2>n3) {
            printf("Ordem crescente: %d, %d, %d", n3, n2, n1);
        } else {
             if (n3>n1) {
                printf("Ordem crescente: %d, %d, %d", n2, n1, n3);
            } else {
                printf("Ordem crescente: %d, %d, %d", n2, n3, n1);
            }
        }
    } else {
     if (n2>n3) {
        printf("Ordem crescente: %d, %d, %d", n1, n3, n2);
    } else {
        printf("Ordem crescente: %d, %d, %d", n1, n2, n3);
    }
    }

    printf("%d, %d, %d\n", n1, n2, n3);
}
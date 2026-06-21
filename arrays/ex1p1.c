#include <stdio.h>

int main() {
    int num[5], i;
    for (i=0; i<5; i++) {
        printf("Digite um valor: ");
        scanf("%d", &num[i]);
    }

    return 0;
}
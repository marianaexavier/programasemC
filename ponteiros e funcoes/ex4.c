#include <stdio.h>

void escadaReversa (int num) {
    if (num == 0) return;
    int coluna;
    for(coluna=0; coluna<num; coluna++) {
            printf("%d", num);
        }
        printf("\n");
    escadaReversa(num-1);
}

int main () {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    escadaReversa(n);
    return 0;
}
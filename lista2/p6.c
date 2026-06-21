#include <stdio.h>

int somaDivisores(int n, int d) {
    if(d==1) {
        return 1;
    }
    if (n%d == 0) {
        return d + somaDivisores(n, d-1);
    } else {
        return somaDivisores(n, d-1);
    }
}

int ehAmigo (int a, int b) {
    if (somaDivisores(a, a-1) == b && somaDivisores(b, b-1) == a) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int A, B;
    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%d %d", &A, &B);
    printf("Resultado (1 - sao amigos; 0 - nao sao amigos): %d\n", ehAmigo(A, B));
    return 0;
}
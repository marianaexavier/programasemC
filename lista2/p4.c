#include <stdio.h>

void minMax(int a, int b, int c, int *min, int *max) {
    if (a>b && a>c) {
        *max = a;
        if(b>c) {
            *min = c;
        } else {
            *min = b;
        }
    } if (b>a && b>c) {
        *max = b;
        if (a>c) {
            *min = c;
        } else {
            *min = a;
        }
    } if (c>a && c>b) {
        *max = c;
        if (a>b) {
            *min = b;
        } else {
            *min = a;
        }
    }
}

int main() {
    int A, B, C, min, max;
    printf("Digite a, b e c: ");
    scanf("%d %d %d", &A, &B, &C);
    minMax(A, B, C, &min, &max);
    printf("Menor e maior valor digitados: %d %d", min, max);
    return 0;
}
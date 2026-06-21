#include <stdio.h>

int main() {
    int matriz[3][3], i, j, num;
    for (i=0; i<3; i++) {
        for (j=0; j<3; i++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite um valor: ");
    scanf("%d", &num);
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            if (matriz[i][j] == num) {
                printf("%d pertence a matriz.\n", num);
            }
        }
    }
    return 0;
}
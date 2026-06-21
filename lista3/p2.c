#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, j, somap=0, somas=0;
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {2, 4, 6, 8},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    for (i=0; i<4; i++) {
        for (j=0; j<4; j++) {
            if (i==j) {
                somap += matriz[i][j];
            } else if (i+j == 3) {
                somas += matriz[i][j]; 
            }
        }
    }
    
    if (somap == somas) {
        printf("As somas %d e %d sao iguais.\n", somap, somas);
    } else {
        printf("As somas %d e %d sao diferentes.\n", somap, somas);
    }
    
    return 0;
}
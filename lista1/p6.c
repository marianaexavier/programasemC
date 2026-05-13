#include <stdio.h>

int main () {
    
    float x, y;

    printf("Informe duas coordenadas x e y separadas por espaco: ");
    scanf("%f %f", &x, &y);

    if (x>0 && y>0) {
        printf("Quadrante 1");
    } else if (x>0 && y<0) {
        printf("Quadrante 2");
    } else if (x!=0 && y == 0) {
        printf("Eixo x");
    } else if (x == 0 && y!=0) {
        printf("Eixo y");
    } else if (x == 0  && y == 0) {
        printf("Origem");
    } else if (x<0 && y<0) {
        printf("Quadrante 3");
    } else {
        printf("Quadrante 4");
    }

    return 0;
}
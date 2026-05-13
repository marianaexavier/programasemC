#include <stdio.h>

int main () {

    float A, B, media;

    printf("Digite dois valores decimais (use espaço para separar): ");
    scanf("%f %f", &A, &B);

    media = ((A*3.5)+(B*7.5))/11;

    printf("MEDIA = %.5f", media);

    return 0;

}
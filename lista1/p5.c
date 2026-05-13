#include <stdio.h>

int main () {

    float raio, volume, pi;

    pi = 3.14159;

    printf("Informe o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4/3)*pi*(raio*raio*raio);

    printf("VOLUME = %.3f", volume);

    return 0;
}
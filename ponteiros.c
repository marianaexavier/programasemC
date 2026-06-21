#include <stdio.h>

int main () {
    float meuFloat = 3.14;
    float *ptFloat = &meuFloat;

    printf("\n%p", ptFloat);
    printf("\n%f", meuFloat);

    *ptFloat = 1.6;

    printf("\n%f", meuFloat);
    return 0;
}
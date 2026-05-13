#include <stdio.h>

int main ()
{
    int N, i;
    float divisao, X, Y;

    printf("Informe a aquantidade de pares a serem processados: ");
    scanf("%d", &N);

    for(i=0; i<N; i++) {
        printf("Informe X e Y separados por espaço: ");
        scanf("%f %f", &X, &Y);

        if (Y!=0)
        {
            divisao = X/Y;
            printf("\n %.2f", divisao);
        } else
        {
            printf("\nDivisão impossível");
        }
    }

    return 0;
}
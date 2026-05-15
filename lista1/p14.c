#include <stdio.h>

int main () {

    int M, N, soma, maior, menor, i;
    soma = 0;

    printf("Informe dois numeros inteiros separados por espaco: \nDigite um dos valores menor ou igual a 0 para sair.");
    scanf("%d %d", &M, &N);

    while (1)
    {

        if (M<=0 || N<=0) break;

        if (M>N) {
            maior = M;
            menor = N;
        } else {
            maior = N;
            menor = M;
        }

        printf("\nSequencia de numeros entre os valores digitados: ");

        for (i=menor; i<=maior; i++) {
            printf("\n%d", i);
            soma += i;
        }
        
        printf("\nSoma = %d", soma);

        printf("\nInforme dois numeros inteiros separados por espaco: \nDigite um dos valores menor ou igual a 0 para sair.");
        scanf("%d %d", &M, &N);

        soma = 0;
    }

    return 0;
}
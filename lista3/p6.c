#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j=0;
    int novosPrecos=0;
    float soma=0.0, somaDesconto=0.0, economia;
    
    printf("Informe a quantidade de produtos: ");
    scanf("%d", &n);

    float *precos = malloc(n*sizeof(float));

    for (i=0; i<n; i++) {
        printf("Digite o valor do produto: ");
        scanf("%f", &precos[i]);
    }

    for (i=0; i<n; i++) {
        if(precos[i]>100.00) {
            novosPrecos++;
        }
        soma+= precos[i];
    }

    printf("Valores originais: ");
    for (i=0; i<n; i++) {
        printf("R$ %.2f ", precos[i]);
    }

    float *comDesconto = malloc(novosPrecos*sizeof(float)); 

    for(i=0; i<n; i++) {
        if (precos[i]>100.00) {
            precos[i] = precos[i]-(precos[i]*0.10);
            comDesconto[j] = precos[i];
            j++;
        }
        somaDesconto+=precos[i];
    }

    economia = soma-somaDesconto;

    printf("\nValores com desconto: ");
    for (j=0; j<novosPrecos; j++) {
        printf("R$ %.2f ", comDesconto[j]);
    }

    printf("\nEconomia obtida com os descontos: R$ %.2f", economia);

    free(precos);
    free(comDesconto);
    
    return 0;
}
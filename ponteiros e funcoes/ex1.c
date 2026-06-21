#include <stdio.h>

void somaImposto (float *taxaImposto, float *custo) {
    *custo = *custo + (*custo * *taxaImposto/100);
} 

int main () {
    float custo, taxaImposto;
    
    printf("Digite o valor do custo: ");
    scanf("%f", &custo);
    printf("Digite o valor da taxa: ");
    scanf("%f", &taxaImposto);

    somaImposto(&taxaImposto, &custo);
    printf("Custo com imposto: %.2f\n", custo);

    return 0;
}
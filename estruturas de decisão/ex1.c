#include <stdio.h>

int main () {

    float salario, salarioLiquido;

    printf("Digite seu salario bruto: ");
    scanf("%f", &salario);

    if (0 < salario && salario <= 420) {
        salarioLiquido = salario - (salario * 0.08);
        printf("Desconto de 8%%.\n");
        printf("Salario liquido: %.2f\n", salarioLiquido);
    } else if (420 < salario && salario <= 1350) {
        salarioLiquido = salario - (salario * 0.09);
        printf("Desconto de 9%%.\n");
        printf("Salario liquido: %.2f\n", salarioLiquido);
    } else {
        salarioLiquido = salario - (salario * 0.10);
        printf("Desconto de 10%%.\n");
        printf("Salario liquido: %.2f\n", salarioLiquido); 
    }

    return 0;
}
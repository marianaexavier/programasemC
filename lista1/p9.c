#include <stdio.h>

int main () {
    float salario, aumento;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    if (salario<1500) {
        aumento = salario*0.20;
        salario = salario+aumento;
        printf("\nSalario: R$ %.2f", salario);
        printf("\nReajuste: R$ %.2f\nPercentual: 20%%", aumento);
    } else if (salario>=1500 && salario<5000) {
        aumento = salario*0.15;
        salario = salario+aumento;
        printf("\nSalario: R$ %.2f", salario);
        printf("\nReajuste: R$ %.2f\nPercentual: 15%%", aumento);
    } else {
        aumento = salario*0.10;
        salario = salario+aumento;
        printf("\nSalario: R$ %.2f", salario);
        printf("\nReajuste: R$ %.2f\nPercentual: 10%%", aumento);
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int maior=0, menor=150;
    int cont = 0, idosos=0, menores=0;
    float porcentagemIdosos;

    printf("Digite a quantidade de pessoas: ");
    scanf("%d", &n);

    int *idades = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("Informe sua idade: ");
        scanf("%d", &idades[i]);
    }

    for (i=0; i<n; i++) {

        if (idades[i]>maior) {
            maior = idades[i];
        } if (idades[i]<menor) {
            menor = idades[i];
        }

        if (idades[i]>=18 && idades[i]<=30) {
            cont++;
        } else if (idades[i]>=60) {
            idosos++;
        } else if (idades[i]<18) {
            menores++;
        }
    }

    porcentagemIdosos = ((float)idosos/n)*100;

    printf("Idade da pessoa mais velha: %d\n", maior);
    printf("Idade da pessoa mais nova: %d\n", menor);
    printf("Numero de pessoas que tem entre 18 e 30 anos: %d\n", cont);
    printf("Percentual de idosos: %.1f%%\n", porcentagemIdosos);
    printf("Numero de pessoas menores de 18 anos: %d\n", menores);

    free(idades);

    return 0;
}
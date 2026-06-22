#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int aprovados=0, recuperacao=0, reprovados=0;
    float percentualAprovados, percentualRecuperacao, percentualReprovados;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);

    float *notas = malloc(n*sizeof(float));

    for (i=0; i<n; i++) {
        printf("Digite a nota do aluno: ");
        scanf("%f", &notas[i]);
    }

    for (i=0; i<n; i++) {
        if (notas[i]>=8.0) {
            aprovados++;
        } else if (notas[i]<8 && notas[i]>=6.0){
            recuperacao++;
        } else {
            reprovados++;
        }
    }

    percentualAprovados = ((float)aprovados/n)*100;
    percentualRecuperacao = ((float)recuperacao/n)*100;
    percentualReprovados = ((float)reprovados/n)*100;
    
    printf("Quantidade de alunos aprovados: %d\n", aprovados);
    printf("Percentual de alunos aprovados: %.2f%%\n", percentualAprovados);
    printf("Quantidade de alunos em recuperacao: %d\n", recuperacao);
    printf("Percentual de alunos em recuperacao: %.2f%%\n", percentualRecuperacao);
    printf("Quantidade de alunos reprovados: %d\n", reprovados);
    printf("Percentual de alunos reprovados: %.2f%%\n", percentualReprovados);

    free(notas);

    return 0;
}
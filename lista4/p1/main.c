#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main() {
    int n, i;

    printf("Informe a quantidade de alunos: ");
    scanf("%d", &n);

    Aluno *alunos = malloc(n*sizeof(Aluno));
    if (alunos == NULL) return 1;

    cadastraAlunos(alunos, n);
    listaAlunos(alunos, n);
    maiorNota(alunos, n);

    free(alunos);
    alunos = NULL;

    return 0;
}
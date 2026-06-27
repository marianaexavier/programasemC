#include <stdio.h>
#include "aluno.h"

void cadastraAlunos(Aluno *alunos, int n) {
    for (int i=0; i<n; i++) {
        printf("\nInforme a matricula do aluno: ");
        scanf("%d", &alunos[i].matricula);

        printf("\nDigite o nome do aluno: ");
        scanf(" %[^\n]", alunos[i].nome);

        printf("\nDigite a nota do aluno: ");
        scanf("%f", &alunos[i].nota);
    }
}

void listaAlunos(Aluno *alunos, int n) {
    for (int i=0; i<n; i++) {
        printf("Matricula: %d - Nome: %s - Nota: %.1f\n", alunos[i].matricula, alunos[i].nome, alunos[i].nota);
    }
}

void maiorNota(Aluno *alunos, int n) {
    int indexMaior = 0;
    for (int i=0; i<n; i++) {
        if (alunos[i].nota>alunos[indexMaior].nota) {
            indexMaior = i;
        }
    }
    printf("Aluno com a maior nota: %s - %.1f", alunos[indexMaior].nome, alunos[indexMaior].nota);
}
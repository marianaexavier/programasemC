#ifndef ALUNO_H
#define ALUNO_H

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void cadastraAlunos(Aluno *alunos, int n);
void listaAlunos(Aluno *alunos, int n);
void maiorNota(Aluno *alunos, int n);

#endif
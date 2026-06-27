#ifndef SITUACAO_H
#define SITUACAO_H

typedef enum {
    APROVADO,
    RECUPERACAO,
    REPROVADO
} Situacao;

Situacao classificar(float nota);

#endif
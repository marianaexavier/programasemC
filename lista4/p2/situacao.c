#include <stdio.h>
#include "situacao.h"

Situacao classificar (float nota) {
    if (nota >= 8.0) return APROVADO;
    if (nota >= 6.0 && nota < 8.0) return RECUPERACAO;
    return REPROVADO;
}
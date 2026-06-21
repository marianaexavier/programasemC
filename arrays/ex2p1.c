#include <stdio.h>

int main() {
    float alturas[10];
    char sexos[10];
    int i, contF=0, contM=0;
    float somaF=0.0, somaM=0.0, menor=4.0, maior=0.0, mediaF, mediaM;
    char sexoMaior, sexoMenor;
    for (i=0; i<10; i++) {
        printf("Informe sua altura: ");
        scanf("%f", &alturas[i]);
        printf("Informe seu sexo(M/F): ");
        scanf(" %c", &sexos[i]);
    }
    for (i=0; i<10; i++) {
        if (alturas[i]>maior) {
            maior = alturas[i];
            sexoMaior=sexos[i];
        }
        if (alturas[i]<menor) {
            menor = alturas[i];
            sexoMenor=sexos[i];
        }

    }
    for(i=0; i<10; i++) {
        printf("Menor altura e sexo: %f  %c\n", menor, sexoMenor);
        printf("Maior altura e sexo: %f  %c\n", maior, sexoMaior);
    }
    for (i=0; i<10; i++) {
        if (sexos[i]=='F') {
            somaF+= alturas[i];
            contF+=1;
        } else {
            somaM+=alturas[i];
            contM+=1;
        }
    }
    mediaF = somaF/contF;
    mediaM = somaM/contM;
    printf("Media de alturas feminina: %f\n", mediaF);
    printf("Media de alturas masculina: %f\n", mediaM);
    printf("Numero de ind. do sexo feminino: %d", contF);
    printf("Numero de individuos do sexo masculino: %d", contM);
    
    return 0;
}
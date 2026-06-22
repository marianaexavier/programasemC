#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j=0;
    int temperaturas30=0, contAmuento=0;
    int maiorVariacao=0;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &n);

    int *temperaturas = malloc(n*sizeof(int));

    for (i=0; i<n; i++) {
        printf("Digite a temperatura registrada: ");
        scanf("%d", &temperaturas[i]);
    }

    for (i=1; i<n; i++) {
        if (temperaturas[i]>30) {
            temperaturas30++;
        } if (temperaturas[i]>temperaturas[i-1]) {
            contAmuento++;
        } if (temperaturas[i]-temperaturas[i-1]>maiorVariacao) {
            maiorVariacao = temperaturas[i] - temperaturas[i-1];
        }
    }

    if (temperaturas[0]>30) {
        temperaturas30++;
    }

    int *acima30 = malloc(temperaturas30*sizeof(int));

    for (i=0; i<n; i++) {
        if(temperaturas[i]>30) {
            acima30[j] = i+1;
            j++;
        }
    }

    printf("Dias em que a temperatura ficou acima de 30: ");
    for(i=0; i<temperaturas30; i++) {
        printf("%d ", acima30[i]);
    }

    printf("\nNumero de vezes que a temperatura aumentou em relacao ao dia anterior: %d\n", contAmuento);
    printf("Maior variacao de temperatura: %d\n", maiorVariacao);

    printf("Ordem inversa: ");
    for (i=n-1; i>=0; i--) {
        printf("%d ", temperaturas[i]);
    }

    free(temperaturas);
    free(acima30);

    return 0;
}
#include <stdio.h>

int main () {

    int num1, num2, numMaior, numMenor, soma=0;

    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);

    if (num2<num1) 
    {
        num2 = numMenor
        num1 = numMaior
    } else 
    {
        num1 = numMenor
        num2 = numMaior
    }

    for (int i=numMenor+1; i<numMaior; i++)
    {
        if (i%2 != 0)
        {
            soma += i;
        }
    }
    printf("Soma = %d", soma);

    return 0;
}
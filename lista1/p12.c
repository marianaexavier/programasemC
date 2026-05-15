#include <stdio.h>

int main () {
    
    int num, num1, i;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    printf("Tabuada do %d", num);

    for (i=1; i<=20; i++) {
        num1 = num*i;
        printf("\n%d x %d = %d", num, i, num1);
    }
    return 0;
}
#include <stdio.h>

void fatoresPrimos (int n, int divisor) {
    if (n == 1) {
        return;
    }
    if (n%divisor==0) {
        printf("%d ", divisor);
        fatoresPrimos(n/divisor, divisor);
    } else {
        fatoresPrimos(n, divisor+1);
    }
}

int main() {
    int num;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Fatores primos de %d: ", num);
    if (num>1){
        fatoresPrimos(num, 2);
    } else if (num==1){
        printf("1\n");
    }  
    return 0;
}
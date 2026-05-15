#include <stdio.h>

int main () {

    int n1, n2, n3;

    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &n1, &n2, & n3);

    printf("Ordem crescente: ");

    if (n1<n2 && n1<n3) 
    {
        if (n2<n3) 
        {
            printf("%d %d %d", n1, n2, n3);
        } else
        {
            printf("%d %d %d", n1, n3, n2);
        }
    } else if (n1>n2 && n1>n3)
    {
        if (n2>n3)
        {
            printf("%d %d %d", n3, n2, n1);
        } else
        {
            printf("%d %d %d", n2, n3, n1);
        }
    } else if (n1>n2 && n1<n3)
    {
        printf("%d %d %d", n2, n1, n3);
    } else if (n1>n3 && n1<n2)
    {
        printf("%d %d %d", n3, n1, n2);
    }

    printf("\nOrdem original: %d %d %d", n1, n2, n3);
}
#include <stdio.h>

int main() {
    int ar[501], i;
    for (i=1; i<501; i++){
        scanf("%d", &ar[i]);
        printf("%d", i);
    }
    return 0;
}
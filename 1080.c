#include <stdio.h>

int main() {
    int n, maior, indice, i;

    maior = -100;
    indice = 1;
    for(i = 0; i < 5; i++) {
        scanf("%d", &n);

        if(n > maior) {
            maior = n;
            indice = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", indice + 1);

    return 0;
}
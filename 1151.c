#include <stdio.h>

int main() {
    int n, i, fibonacci, aux1, aux2;
    scanf("%d", &n);

    aux1 = 0, aux2 = 1;
    fibonacci = aux1 + aux2;

    printf("%d %d", aux1, aux2);

    for(i = 3; i <= n; i++) {
        printf(" %d", fibonacci);
        aux1 = aux2;
        aux2 = fibonacci;
        fibonacci = aux1 + aux2;
    }

    printf("\n");

    return 0;
}
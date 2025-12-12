#include <stdio.h>

int main() {
    int n, i, valor;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%x", &valor);
        printf("%c", valor);
    }

    printf("\n");

    return 0;
}

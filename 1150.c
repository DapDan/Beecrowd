#include <stdio.h>

int main() {
    int x, z, soma, count;

    scanf("%d", &x);

    z = x - 1;
    while (z <= x) {
        scanf("%d", &z);
    }

    soma = x;
    count = 1;

    while (soma <= z) {
        x++;
        soma += x;
        count++;
    }

    printf("%d\n", count);

    return 0;
}
#include <stdio.h>

int main() {
    int ini, fim, i, res, aux;
    scanf("%d %d", &ini, &fim);

    if(ini > fim) {
        aux = ini;
        ini = fim;
        fim = aux;
    }

    res = 0;
    for(i = ini + 1; i < fim; i++) {
        if(i % 2 != 0) {
            res += i;
        }
    }

    printf("%d\n", res);

    return 0;
}
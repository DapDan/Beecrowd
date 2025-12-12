#include <stdio.h>

int calculaTempo(int ini, int fim) {
    if (ini == fim) {
        return 24;
    } else if (fim > ini) {
        return fim - ini;
    } else {
        return (24 - ini) + fim;
    }
}

int main() {
    int ini, fim, res;
    scanf("%d %d", &ini, &fim);

    if(ini == fim)
        res = 24;
    else
        res = calculaTempo(ini, fim);

    printf("O JOGO DUROU %d HORA(S)\n", res);

    return 0;
}

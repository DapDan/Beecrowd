#include <stdio.h>

int main() {
    int n, i, menorNum, menorPos;

    scanf("%d", &n);
    int x[n];

    menorNum = 1000;
    menorPos = 0;
    for(i = 0; i < n; i++) {
        scanf("%d", &x[i]);

        if(x[i] < menorNum) {
            menorNum = x[i];
            menorPos = i;
        }
    }

    printf("Menor valor: %d\n", menorNum);
    printf("Posicao: %d\n", menorPos);

    return 0;
}
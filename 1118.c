#include <stdio.h>

int main() {
    float x, y;
    int opcao;

    opcao = 1;
    while(opcao <= 1) {
        while(1) {
            scanf("%f", &x);
            if(x < 0 || x > 10)
                printf("nota invalida\n");
            else
                break;
        }
        while(1) {
            scanf("%f", &y);
            if(y < 0 || y > 10)
                printf("nota invalida\n");
            else
                break;
        }

        printf("media = %.2f\n", (x + y) / 2);

        opcao = -1;
        while(opcao < 1 || opcao > 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        }
    }

    return 0;
}
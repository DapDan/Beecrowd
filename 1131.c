#include <stdio.h>

int main() {
    int inter, gremio, opcao, qtdGrenais;
    int countInter, countGremio, countEmpate;

    countInter = 0, countGremio = 0, countEmpate = 0, qtdGrenais = 1;
    opcao = 1;
    while(opcao >= 1 && opcao < 2) {
        scanf("%d %d", &inter, &gremio);

        if(inter > gremio)
            countInter++;
        else if(gremio > inter)
            countGremio++;
        else
            countEmpate++;

        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &opcao);
        if(opcao == 1)
            qtdGrenais++;
    }

    printf("%d grenais\n", qtdGrenais);
    printf("Inter:%d\n", countInter);
    printf("Gremio:%d\n", countGremio);
    printf("Empates:%d\n", countEmpate);
    if(inter > gremio)
        printf("Inter venceu mais\n");
    else
        printf("Gremio venceu mais\n");

    return 0;
}
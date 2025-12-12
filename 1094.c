#include <stdio.h>

int main() {
    int n, i, total, aux;
    int totalC, totalR, totalS;
    char type;

    scanf("%d", &n);

    type = "\0";
    aux = 0;
    total = 0;
    totalC = totalR = totalS = 0;
    for(i = 0; i < n; i++) {
        scanf("%d %c", &aux, &type);

        if(type == 'C') {
            totalC += aux;
        }else if(type == 'R') {
            totalR += aux;
        }else if(type == 'S') {
            totalS += aux;
        }

        total += aux;
    }

    float pC, pR, pS;
    pC = ((float)totalC / (float)total) * 100;
    pR = ((float)totalR / (float)total) * 100;
    pS = ((float)totalS / (float)total) * 100;

    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2f %%\n", pC);
    printf("Percentual de ratos: %.2f %%\n", pR);
    printf("Percentual de sapos: %.2f %%\n", pS);

    return 0;
}
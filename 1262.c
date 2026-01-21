#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    char trace[101];
    int procs;

    while (scanf("%s %d", trace, &procs) != EOF) {
        int conta = 0;
        int i = 0;
        int tam = strlen(trace);

        while (i < tam) {
            if (trace[i] == 'W') {
                conta++;
                i++;
            } else { // 'R'
                int contaR = 0;
                while (i < tam && trace[i] == 'R') {
                    contaR++;
                    i++;
                }
                conta += (int)ceil((double)contaR / procs);
            }
        }

        printf("%d\n", conta);
    }

    return 0;
}

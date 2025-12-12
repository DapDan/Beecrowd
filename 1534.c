#include <stdio.h>

int main() {
    int n, i, j, aux;

    while(scanf("%d", &n) != EOF) {
        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                if (i + j == n - 1)       // 1º: diagonal secundária
                    aux = 2;
                else if (i == j)          // 2º: diagonal principal
                    aux = 1;
                else
                    aux = 3;

            printf("%d", aux);

            }
            printf("\n");
        }
    }

    return 0;
}
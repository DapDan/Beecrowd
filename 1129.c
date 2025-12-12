#include <stdio.h>

int main() {
    int cases, a, b, c, d, e;

    scanf("%d", &cases);
    while (cases != 0) {
        for (int i = 0; i < cases; i++) {
            scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

            // Verifica qual alternativa foi marcada
            if (a <= 127 && b > 127 && c > 127 && d > 127 && e > 127) {
                printf("A\n");
            } else if (a > 127 && b <= 127 && c > 127 && d > 127 && e > 127) {
                printf("B\n");
            } else if (a > 127 && b > 127 && c <= 127 && d > 127 && e > 127) {
                printf("C\n");
            } else if (a > 127 && b > 127 && c > 127 && d <= 127 && e > 127) {
                printf("D\n");
            } else if (a > 127 && b > 127 && c > 127 && d > 127 && e <= 127) {
                printf("E\n");
            } else {
                printf("*\n");
            }
        }

        scanf("%d", &cases);
    }

    return 0;
}
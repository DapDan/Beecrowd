#include <stdio.h>

int main() {
    int n, i, speed, maior;

    while (scanf("%d", &n) != EOF) {
        maior = 0;
        for (i = 0; i < n; i++) {
            scanf("%d", &speed);
            if (speed > maior) {
                maior = speed;
            }
        }

        if (maior < 10)
            printf("1\n");
        else if (maior < 20)
            printf("2\n");
        else
            printf("3\n");
    }

    return 0;
}

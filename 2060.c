#include <stdio.h>

int main() {
    int n, l;
    int divisores[] = {2, 3, 4, 5};
    int cont[4] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &l);

        for (int j = 0; j < 4; j++) {
            if (l % divisores[j] == 0)
                cont[j]++;
        }
    }

    for (int j = 0; j < 4; j++) {
        printf("%d Multiplo(s) de %d\n", cont[j], divisores[j]);
    }

    return 0;
}
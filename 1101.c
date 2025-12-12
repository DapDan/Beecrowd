#include <stdio.h>

int main() {
    int m, n, sum;

    while (1) {
        scanf("%d %d", &m, &n);
        if (m <= 0 || n <= 0) {
            break;
        }

        sum = 0;
        if (m > n) {
            int aux = m;
            m = n;
            n = aux;
        }

        for (int i = m; i <= n; i++) {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}
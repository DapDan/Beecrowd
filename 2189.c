#include <stdio.h>

int main() {
    int n, num, i, winner, count = 0;

    while (scanf("%d", &n)) {
        if (n == 0)
            break;

        count++;
        winner = 0;

        for (i = 0; i < n; i++) {
            scanf("%d", &num);
            if (num == i + 1)
                winner = num;
        }

        printf("Teste %d\n", count);
        printf("%d\n\n", winner);
    }

    return 0;
}
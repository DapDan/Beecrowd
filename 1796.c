#include <stdio.h>

int main() {
    int N, i;
    int arrive[100];
    int total;

    while (scanf("%d", &N) && N != 0) {
        for (i = 0; i < N; i++) {
            scanf("%d", &arrive[i]);
        }

        total = 10;

        for (i = 1; i < N; i++) {
            if (arrive[i] < arrive[i - 1] + 10) {
                total += arrive[i] - arrive[i - 1];
            } else {
                total += 10;
            }
        }

        printf("%d\n", total);
    }

    return 0;
}

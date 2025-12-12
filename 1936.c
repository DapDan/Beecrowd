#include <stdio.h>

int main() {
    int v[] = {1, 2, 6, 24, 120, 720, 5040, 40320};
    int N, i, count = 0;

    scanf("%d", &N);

    for (i = 7; i >= 0; i--) {
        while (v[i] <= N) {
            N -= v[i];
            count++;
        }
        if (N == 0)
            break;
    }

    printf("%d\n", count);
    return 0;
}

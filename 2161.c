#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double x = 6.0;

    if (N == 0) {
        printf("3.0000000000\n");
        return 0;
    }

    for (int i = 1; i < N; i++) {
        x = 6.0 + 1.0 / x;
    }

    double ans = 3.0 + 1.0 / x;
    printf("%.10f\n", ans);

    return 0;
}

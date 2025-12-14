#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    double valor = 0.0;

    for (int i = 0; i < N; i++) {
        valor = 1.0 / (2.0 + valor);
    }

    valor += 1.0;

    printf("%.10lf\n", valor);
    return 0;
}

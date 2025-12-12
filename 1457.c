#include <stdio.h>
#include <string.h>

int main() {
    long long int t, n, step, res;
    char exclamacao[21];

    scanf("%lld", &t);

    while (t--) {
        scanf("%lld%s", &n, exclamacao);
        step = strlen(exclamacao);
        res = 1;

        // Calcula o fatorial com saltos
        for (int i = n; i > 0; i -= step) {
            res *= i;
        }

        printf("%lld\n", res);
    }

    return 0;
}

#include <math.h>
#include <stdio.h>

int main() {
    float n, P, M;

    scanf("%f", &n);

    P = n / log(n);
    M = 1.25506 * (n / log(n));

    printf("%.1f %.1f\n", P, M);

    return 0;
}

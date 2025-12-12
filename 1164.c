#include <stdio.h>
#include <math.h>

int isPerfect(int X) {
    if (X == 1) {
        return 0;
    }

    int sum = 1;
    int sqrtX = (int)sqrt(X);

    for (int i = 2; i <= sqrtX; i++) {
        if (X % i == 0) {
            sum += i;
            if (i != X / i) {
                sum += X / i;
            }
        }
    }

    return sum == X;
}

int main() {
    int N;
    scanf("%d", &N);

    while (N--) {
        int X;
        scanf("%d", &X);

        if (isPerfect(X))
            printf("%d eh perfeito\n", X);
        else
            printf("%d nao eh perfeito\n", X);
    }

    return 0;
}
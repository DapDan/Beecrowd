#include <stdio.h>

int main() {
    int i, n, r1, r2, sum;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &r1, &r2);
        sum = r1 + r2;

        printf("%d\n", sum);
    }

    return 0;
}

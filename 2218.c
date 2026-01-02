#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, t, n, res;

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d", &n);

        res = ((n * (n + 1)) / 2) + 1;
        printf("%d\n", res);
    }

    return 0;
}

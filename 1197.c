#include <stdio.h>

int main() {
    int v, t, res;

    while(scanf("%d %d", &v, &t) != EOF) {
        res = v * t * 2;
        printf("%d\n", res);
    }

    return 0;
}
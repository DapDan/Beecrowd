#include <stdio.h>

int main() {
    int a, b, res;

    while(scanf("%d %d", &a, &b), a && b) {
        res = a + b;
        printf("%d\n", res);
    }

    return 0;
}
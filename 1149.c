#include <stdio.h>

int main() {
    int a, n, res;
    scanf("%d", &a);

    n = 0;
    while(n < 1) {
        scanf("%d", &n);
    }

    res = 0;
    for(int i = 0; i < n; i++) {
        res += a + i;
    }

    printf("%d\n", res);

    return 0;
}
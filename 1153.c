#include <stdio.h>

int main() {
    int n, res;
    scanf("%d", &n);

    res = 1;
    for(int i = n; i > 0; i--) {
        res *= i;
    }

    printf("%d\n", res);

    return 0;
}
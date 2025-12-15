#include <stdio.h>

int main() {
    int n, m, res;

    while(scanf("%d %d", &n, &m)) {
        if(n == 0 && m == 0)
            break;

        res = n * m;
        printf("%d\n", res);
    }

    return 0;
}

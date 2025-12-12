#include <stdio.h>

int main() {
    int n, m, res, cases;

    scanf("%d",&cases);

    for(int i = 0; i < cases; i++) {
        scanf("%d %d", &n, &m);
        res = (n / 3) * (m / 3);
        printf("%d\n", res);
    }

    return 0;
}
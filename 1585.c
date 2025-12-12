#include <stdio.h>

int main() {
    int n, i, x, y, area;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        area = (x * y) / 2;
        printf("%d cm2\n", area);
    }

    return 0;
}

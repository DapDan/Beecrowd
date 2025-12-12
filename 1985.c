#include <stdio.h>

int main() {
    int p, code, q;
    double total = 0;

    scanf("%d", &p);

    while (p--) {
        scanf("%d %d", &code, &q);

        switch (code) {
            case 1001: total += 1.50 * q; break;
            case 1002: total += 2.50 * q; break;
            case 1003: total += 3.50 * q; break;
            case 1004: total += 4.50 * q; break;
            case 1005: total += 5.50 * q; break;
        }
    }

    printf("%.2lf\n", total);

    return 0;
}

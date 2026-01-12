#include <stdio.h>

int main() {
    int n, ci, vi;
    int i, totalPares;

    while(scanf("%d", &n)) {
        if(n == 0)
            break;

        totalPares = 0;
        for(i = 0; i < n; i++) {
            scanf("%d %d", &ci, &vi);
            totalPares += vi / 2;
        }

        printf("%d\n", totalPares / 2);
    }

    return 0;
}

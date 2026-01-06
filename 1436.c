#include <stdio.h>

int main() {
    int t, n, num, i, j;

    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d", &n);

        int v[n];
        if(n > 1 && n < 11) {
            for(j = 0; j < n; j++) {
                scanf("%d", &num);
                if(num >= 11 && num <= 20) {
                    v[j] = num;
                }
            }
        }

        int pos = n / 2;
        printf("Case %d: %d\n", i + 1, v[pos]);
    }

    return 0;
}

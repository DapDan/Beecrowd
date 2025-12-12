#include <stdio.h>

int main() {
    int n, x, y, i, j, count, res;

    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        res = 0, count = 0, j = x;
        while(count < y) {
            if(j % 2 != 0) {
                res += j;
                count++;
            }

            j++;
        }

        printf("%d\n", res);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int n, count, i;
    scanf("%d", &n);

    count = 0, i = 1;
    while(count < n) {
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
        i += 4;
        count++;
    }

    return 0;
}
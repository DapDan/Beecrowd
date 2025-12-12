#include <stdio.h>

int main() {
    int n, count, i;
    scanf("%d", &n);

    count = 0, i = 1;
    while(count < n) {
        printf("%d %d %d\n", i, i * i, i * i * i);
        printf("%d %d %d\n", i, (i * i) + 1, (i * i * i) + 1);
        i++;
        count++;
    }

    return 0;
}
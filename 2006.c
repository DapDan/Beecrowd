#include <stdio.h>

int main() {
    int n, i, count;
    int v[5];

    scanf("%d", &n);

    count = 0;
    for(i = 0; i < 5; i++) {
        scanf("%d", &v[i]);

        if(v[i] == n)
            count++;
    }

    printf("%d\n", count);

    return 0;
}

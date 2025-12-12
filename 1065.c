#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, total = 0;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int v[] = {n1, n2, n3, n4, n5};

    for(int i = 0; i < 5; i++) {
        if(v[i] % 2 == 0)
            total++;
    }

    printf("%d valores pares\n", total);

    return 0;
}
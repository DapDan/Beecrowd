#include <stdio.h>

int main() {
    int n, i;

    scanf("%d", &n);
    if(n > 0) {
        printf("Ho");
        for(i = 1; i < n; i++) {
            printf(" Ho");
        }
    }

    printf("!");

    return 0;
}

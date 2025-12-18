#include <stdio.h>
#include <string.h>

int main() {
    int n, i, tamA, tamB;
    char a[1001], b[1001];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%s %s", a, b);
        tamA = strlen(a);
        tamB = strlen(b);

        if(tamB <= tamA && strcmp(a + (tamA - tamB), b) == 0)
            printf("encaixa\n");
        else
            printf("nao encaixa\n");
    }

    return 0;
}

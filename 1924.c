#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, i;
    char *curso = (char *)malloc(101 * sizeof(char));

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s", curso);
    }

    printf("Ciencia da Computacao\n");

    return 0;
}

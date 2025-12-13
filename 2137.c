#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void *a, const void *b) {
    return strcmp((char *)a, (char *)b);
}

int main() {
    int N;
    char books[1000][5];

    while (scanf("%d", &N) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s", books[i]);
        }

        qsort(books, N, sizeof(books[0]), cmp);

        for (int i = 0; i < N; i++) {
            printf("%s\n", books[i]);
        }
    }

    return 0;
}

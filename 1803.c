#include <stdio.h>
#include <string.h>

#define MAX 90

int main() {
    int i, j, N;
    char temp[4][MAX];

    for (i = 0; i < 4; i++) {
        scanf("%s", temp[i]);
    }

    N = strlen(temp[0]);

    int m[4][MAX];

    for (i = 0; i < 4; i++) {
        for (j = 0; j < N; j++) {
            m[i][j] = temp[i][j] - '0';
        }
    }

    int getCol(int col){
        return m[0][col] * 1000 +
               m[1][col] * 100 +
               m[2][col] * 10 +
               m[3][col];
    }

    int F = getCol(0);
    int L = getCol(N - 1);

    for (i = 1; i < N - 1; i++) {
        int Mi = getCol(i);
        int Ci = (F * Mi + L) % 257;
        putchar(Ci);
    }

    putchar('\n');
    return 0;
}

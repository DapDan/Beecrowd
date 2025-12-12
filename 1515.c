#include <stdio.h>
#include <stdlib.h>
#define TAMMAX 51

int main() {
    int N, A, T, i, menor, pos;
    char **msg;

    while(1) {
        scanf("%d", &N);
        if(N == 0)
            break;

        menor = 10000;
        pos = 0;

        msg = (char **)malloc(N * sizeof(char*));
        for(i = 0; i < N; i++) {
            msg[i] = (char *)malloc(TAMMAX * sizeof(char));
            scanf("%s %d %d", msg[i], &A, &T);

            if(A - T < menor) {
                menor = A - T;
                pos = i;
            }
        }

        printf("%s\n", msg[pos]);

        for(i = 0; i < N; i++)
            free(msg[i]);
        free(msg);
    }

    return 0;
}

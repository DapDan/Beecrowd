#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMMAX 50

int main() {
    int n, i, j, k, flag, length, maior;
    char **str, *aux;
    int primeiro_caso = 1;

    while (1) {
        scanf("%d", &n);
        if (n == 0)
            break;

        str = (char **)malloc(n * sizeof(char*));

        maior = 0;

        for (i = 0; i < n; i++) {
            str[i] = (char *)malloc(TAMMAX * sizeof(char));
            aux = (char *)malloc(TAMMAX * sizeof(char));

            scanf(" %[^\n]", str[i]);

            k = 0;
            flag = 0;
            length = strlen(str[i]);
            for (j = 0; j < length; j++) {
                if (!isspace(str[i][j])) {
                    aux[k++] = str[i][j];
                    flag = 0;
                } else if (flag == 0) {
                    aux[k++] = ' ';
                    flag = 1;
                }
            }

            if (k > 0 && aux[k-1] == ' ')
                k--;

            aux[k] = '\0';
            strcpy(str[i], aux);

            if (k > maior)
                maior = k;

            free(aux);
        }

        // Imprime linha em branco entre casos, se não for o primeiro
        if (!primeiro_caso)
            printf("\n");
        primeiro_caso = 0;

        // Imprime todas as linhas alinhadas à direita
        for (i = 0; i < n; i++) {
            printf("%*s\n", maior, str[i]);
            free(str[i]);
        }

        free(str);
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
    int m, n, i, j, res;
    char texto[1000];
    scanf("%d %d", &m, &n);

    char palavras[m][20];
    int salario[m];

    for(i = 0; i < m; i++)
        scanf("%s %d", palavras[i], &salario[i]);

    char linha[1000];
    getchar();

    for(i = 0; i < n; i++) {
        res = 0;

        while(1) {
            fgets(linha, sizeof(linha), stdin);

            if(strcmp(linha, ".\n") == 0)
                break;

            char *token = strtok(linha, " \n");
            while(token != NULL) {
                for(j = 0; j < m; j++) {
                    if(strcmp(token, palavras[j]) == 0) {
                        res += salario[j];
                        break;
                    }
                }
                token = strtok(NULL, " \n");
            }
        }

        printf("%d\n", res);
    }

    return 0;
}

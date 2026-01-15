#include <stdio.h>
#include <string.h>

int main() {
    int i, j, n;
    char expressao[1005];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        int balance = 0;
        int contador = 0;

        scanf(" %s", expressao);
        int tamExp = strlen(expressao);
        for (j = 0; j < tamExp; j++) {
            if (expressao[j] == '<') {
                balance++;
            } else if (balance > 0 && expressao[j] == '>') {
                balance--;
                contador++;
            }
        }
        printf("%d\n", contador);
    }

    return 0;
}

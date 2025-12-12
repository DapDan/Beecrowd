#include <stdio.h>
#include <string.h>

int sheldonWins(char *a, char *b) {
    return (strcmp(a, "tesoura") == 0 && strcmp(b, "papel") == 0) ||
           (strcmp(a, "papel") == 0 && strcmp(b, "pedra") == 0) ||
           (strcmp(a, "pedra") == 0 && strcmp(b, "lagarto") == 0) ||
           (strcmp(a, "lagarto") == 0 && strcmp(b, "Spock") == 0) ||
           (strcmp(a, "Spock") == 0 && strcmp(b, "tesoura") == 0) ||
           (strcmp(a, "tesoura") == 0 && strcmp(b, "lagarto") == 0) ||
           (strcmp(a, "lagarto") == 0 && strcmp(b, "papel") == 0) ||
           (strcmp(a, "papel") == 0 && strcmp(b, "Spock") == 0) ||
           (strcmp(a, "Spock") == 0 && strcmp(b, "pedra") == 0) ||
           (strcmp(a, "pedra") == 0 && strcmp(b, "tesoura") == 0);
}

int main() {
    int n, i;
    char option1[20], option2[20];

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%s %s", option1, option2);

        if (strcmp(option1, option2) == 0) {
            printf("Caso #%d: De novo!\n", i + 1);
        } else if (sheldonWins(option1, option2)) {
            printf("Caso #%d: Bazinga!\n", i + 1);
        } else {
            printf("Caso #%d: Raj trapaceou!\n", i + 1);
        }
    }

    return 0;
}

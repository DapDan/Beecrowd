#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMMAX 50

int main() {
    int i, j;
    int t, possibility;
    char *s, c;

    scanf("%d", &t);
    s = (char *)malloc(TAMMAX * sizeof(char));
    for (i = 0; i < t; i++) {
        possibility = 1;
        scanf("%s", s);

        for(j = 0; j < strlen(s); j++) {
            c = s[j];
            if (c == 'A' || c == 'a' ||
                c == 'E' || c == 'e' ||
                c == 'I' || c == 'i' ||
                c == 'O' || c == 'o' ||
                c == 'S' || c == 's') {
                possibility *= 3;
                } else {
                    possibility *= 2;
                }
        }

        printf("%d\n", possibility);
    }

    return 0;
}

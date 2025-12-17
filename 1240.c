#include <stdio.h>
#include <string.h>

int main() {
    int n, i, tamP, tamS;
    char principal[1001], secundario[1001];

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%s %s", principal, secundario);
        tamP = strlen(principal);
        tamS = strlen(secundario);

        if (tamS <= tamP && strcmp(principal + (tamP - tamS), secundario) == 0) {
            printf("encaixa\n");
        }else{
            printf("nao encaixa\n");
        }
    }

    return 0;
}

#include <stdio.h>
#include <string.h>

void inverte(char *str) {
    int ini = 0;
    int fim = strlen(str) - 1;
    char temp;

    while (ini < fim) {
        temp = str[ini];
        str[ini] = str[fim];
        str[fim] = temp;
        ini++;
        fim--;
    }
}

int main() {
    int c, B, E;
    int i, j, k;

    scanf("%d", &c);

    for (i = 0; i < c; i++) {
        scanf("%d %d", &B, &E);

        char seq[60000] = ""; 
        char esp[60000];        

        k = 0;
        for (j = B; j <= E; j++) {
            k += sprintf(&seq[k], "%d", j);
        }

        strcpy(esp, seq);  
        inverte(esp);       

        printf("%s%s\n", seq, esp);
    }

    return 0;
}

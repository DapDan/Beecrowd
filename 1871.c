#include <stdio.h>
#include <string.h>

int main() {
    int n1, n2, sum, i, j;
    char buffer[20];

    while(scanf("%d %d", &n1, &n2)) {
        if(n1 == 0 && n2 == 0)
            break;

        sum = n1 + n2;
        sprintf(buffer, "%d", sum);

        j = 0;
        for(i = 0; i < strlen(buffer); i++) {
            if(buffer[i] != '0') {
                buffer[j++] = buffer[i];
            }
        }

        buffer[j] = '\0';
        printf("%s\n", buffer);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int N, i, force;
    char *name = (char *)malloc(6 * sizeof(char));

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%s %d", name, &force);

        if(strcmp(name, "Thor") == 0)
            printf("Y\n");
        else
            printf("N\n");
    }

    return 0;
}

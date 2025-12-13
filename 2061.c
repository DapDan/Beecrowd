#include <stdio.h>
#include <string.h>

int main() {
    int n, m, i, total;
    char action[7];

    scanf("%d %d", &n, &m);

    total = n;
    for(i = 0; i < m; i++) {
        scanf("%s", action);

        if(strcmp(action, "fechou") == 0)
            total += 1;
        else
            total -= 1;
    }

    printf("%d\n", total);

    return 0;
}

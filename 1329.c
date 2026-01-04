#include <stdio.h>

int main() {
    int i, n, num, mary, john;
    while (1) {
        scanf("%d", &n);
        if(n == 0)
            break;

        mary = john = 0;
        for(i = 0; i < n; i++) {
            scanf("%d", &num);
            if(num == 0)
                mary++;
            else if(num == 1)
                john++;
        }

        printf("Mary won %d times and John won %d times\n", mary, john);

    }

    return 0;
}

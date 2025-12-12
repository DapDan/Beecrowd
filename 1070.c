#include <stdio.h>

int main() {
    int x, cont;
    scanf("%d", &x);

    cont = 0;
    while(cont != 6) {
        if(x % 2 != 0) {
            printf("%d\n", x);
            cont++;
        }
        x++;
    }

    return 0;
}
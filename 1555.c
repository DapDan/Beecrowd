#include <stdio.h>

int rafael(int x, int y) {
    return ((3 * x) * (3 * x)) + y * y;
}

int beto (int x, int y) {
    return (2 * (x * x)) + ((5 * y) * (5 * y));
}

int carlos(int x, int y) {
    return (-100 * x) + (y * y * y);
}

int main() {
    int N, r, c, b, i, x, y;

    scanf("%d", &N);
    for(i = 0; i < N; i++) {
        scanf("%d %d", &x, &y);

        r = rafael(x, y);
        b = beto(x, y);
        c = carlos(x,y);

        if(r > b && r > c)
            printf("Rafael ganhou\n");
        else if(b > r && b > c)
            printf("Beto ganhou\n");
        else if(c > r && c > b)
            printf("Carlos ganhou\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int r1, x1, y1, r2, x2, y2;
    int dx, dy, dist, diffRaio;

    while(scanf("%d %d %d %d %d %d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
        dx = (x2 - x1);
        dy = (y2 - y1);

        dist = (dx * dx) + (dy * dy);
        diffRaio = r1 - r2;

        if(diffRaio >= 0 && dist <= diffRaio * diffRaio)
            printf("RICO\n");
        else
            printf("MORTO\n");
    }

    return 0;
}

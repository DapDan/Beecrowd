#include <stdio.h>

int main() {
    int pa, pb, count, cases;
    double g1, g2, i;

    scanf("%d", &cases);
    for(i = 0; i < cases; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        count = 0;
        while(pa <= pb && count <= 100) {
            pa = (pa + (pa * (g1/100)));
            pb = (pb + (pb * (g2/100)));
            count++;
        }

        if(count > 100)
            printf("Mais de 1 seculo.\n");
        else
            printf("%d anos.\n", count);
    }

    return 0;
}
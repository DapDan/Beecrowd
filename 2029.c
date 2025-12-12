#include <stdio.h>

int main() {
    double v, d;
    double h, r, area;
    while(scanf("%lf %lf", &v, &d) != EOF) {
        r = d / 2;
        h = v / (3.14 * r * r);
        printf("ALTURA = %.2lf\n", h);

        area = 3.14 * r * r;
        printf("AREA = %.2lf\n", area);
    }

    return 0;
}

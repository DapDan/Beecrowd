#include <math.h>
#include <stdio.h>

int main() {
    double degree, distance, elves;
    double height, rad;

    while(scanf("%lf %lf %lf", &degree, &distance, &elves) != EOF) {
        rad = degree * 3.141592654 / 180;
        height = distance * tan(rad);
        height += elves;
        height *= 5;

        printf("%.2lf\n", height);
    }

    return 0;
}

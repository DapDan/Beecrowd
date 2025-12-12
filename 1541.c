#include <math.h>
#include <stdio.h>

int main() {
    int a, b, c;
    float area, lado;

    while(1) {
        scanf("%d %d %d", &a, &b, &c);
        if(a == 0)
            break;

        area = (a * b * 100) / c;
        lado = sqrt(area);
        lado = floor(lado);

        printf("%.0f\n", lado);
    }

    return 0;
}
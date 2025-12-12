#include <stdio.h>

int main() {
    int i, n;
    float x, y, res;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%f %f", &x, &y);
        if(y == 0)
            printf("divisao impossivel\n");
        else {
            res = x / y;
            printf("%.1f\n", res);
        }
    }

    return 0;
}
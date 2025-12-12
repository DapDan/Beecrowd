#include <stdio.h>

int main() {
    float S, i, j;

    i = 1;
    S = 0;
    j = 1;
    while(i < 40) {
        S += (i + 2)/(2 * j);
        i = i + 2;
        j = 2 * j;
    }

    S += 1;
    printf("%.2f\n", S);

    return 0;
}
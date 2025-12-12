#include <stdio.h>

int main() {
    int N;
    float num1, num2, num3;
    float avg;

    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        scanf("%f %f %f", &num1, &num2, &num3);
        avg = (num1 * 2 + num2 * 3 + num3 * 5) / 10;
        printf("%.1f\n", avg);
    }

    return 0;
}
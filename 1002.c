#include <stdio.h>

int main() {
    double R;
    const double PI = 3.14159;

    scanf("%lf", &R);

    double A = PI * R * R;

    printf("A=%.4lf\n", A);

    return 0;
}

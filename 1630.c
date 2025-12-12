#include <stdio.h>

int mdc(int num1, int num2) {
    int resto;
    do {
        resto = num1 % num2;
        num1 = num2;
        num2 = resto;
    } while (resto != 0);
    return num1;
}

int main() {
    int x, y, stakes;

    while(scanf("%d %d", &x, &y) != EOF) {
        stakes = (2 * (x + y)) / mdc(x, y);
        printf("%d\n", stakes);
    }

    return 0;
}

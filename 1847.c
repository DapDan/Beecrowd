#include <stdio.h>

int main() {
    int a, b, c, flag;
    scanf("%d %d %d", &a, &b, &c);

    if ((b < a) && (c >= b))
        flag = 1;
    else if ((b > a) && (c > b)) {
        if (c - b >= b - a)
            flag = 1;
        else
            flag = 0;
    } else if ((a > b) && (c < b)) {
        if (b - c < a - b)
            flag = 1;
        else
            flag = 0;
    } else if (a == b) {
        if (c > b)
            flag = 1;
        else
            flag = 0;
    } else
        flag = 0;

    if (flag == 1)
        printf(":)\n");
    else
        printf(":(\n");

    return 0;
}

#include <math.h>
#include <stdio.h>

int main() {
    int a, b, q, r;
    scanf("%d %d", &a, &b);

    q = a / b;
    r = a % b;

    if(r < 0) {
        r += abs(b);

        if(b > 0)
            q -= 1;
        else
            q += 1;
    }

    printf("%d %d\n", q, r);

    return 0;
}

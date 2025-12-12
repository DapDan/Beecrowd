#include <stdio.h>

int main() {
    int n, x, in, out;
    scanf("%d", &n);

    in = out = 0;
    while(n > 0) {
        scanf("%d", &x);
        if(x >= 10 && x <= 20)
            in++;
        else if(x < 10 || x > 20)
            out++;

        n--;
    }

    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}
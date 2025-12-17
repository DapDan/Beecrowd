#include <ctype.h>
#include <stdio.h>

int main() {
    int res, a, b, n, i;
    char line[4];

    scanf("%d", &n);
     for(i = 0; i < n; i++) {
        scanf("%3s", line);

        a = line[0] - '0';
        b = line[2] - '0';

        if (a == b)
            res = a * b;
        else {
            if (isupper(line[1]))
                res = b - a;
            else
                res = a + b;
        }

        printf("%d\n", res);
    }

    return 0;
}

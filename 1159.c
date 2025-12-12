#include <stdio.h>

int main() {
    int x, i, res;

    while(1) {
        scanf("%d", &x);

        if(x == 0)
            break;

        i = 1, res = 0;;
        if(x % 2 == 0) {
            while(i <= 5) {
                res += x;
                x += 2;
                i++;
            }
        }else {
            x++;
            while(i <= 5) {
                res += x;
                x += 2;
                i++;
            }
        }

        printf("%d\n", res);
    }


    return 0;
}
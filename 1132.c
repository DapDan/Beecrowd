#include <stdio.h>

int main() {
    int x, y, res;
    scanf("%d %d", &x, &y);

    res = 0;
    if(x > y) {
        for(int i = y; i <= x; i++) {
            if(i % 13 != 0)
                res += i;
        }
    }else {
        for(int i = x; i <= y; i++) {
            if(i % 13 != 0)
                res += i;
        }
    }


    printf("%d\n", res);

    return 0;
}
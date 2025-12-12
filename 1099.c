#include <stdio.h>

int main() {
    int i, n, x, y, res;
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        res = 0;

        if(x < y) {
            for(int j = x + 1; j < y; j++) {
                if(j % 2 != 0)
                    res += j;
            }
        }else if(x > y) {
            for(int j = y + 1; j < x; j++) {
                if(j % 2 != 0)
                    res += j;
            }
        }

        printf("%d\n", res);
    }


    return 0;
}
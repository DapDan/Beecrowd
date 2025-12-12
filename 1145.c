#include <stdio.h>

int main() {
    int x, y, i, count;

    scanf("%d %d", &x, &y);

    count = 0;
    for(i = 1; i <= y; i++) {
        printf("%d", i);
        count++;

        if(count == x) {
            printf("\n");
            count = 0;
        }else
            printf(" ");
        
    }

    return 0;
}

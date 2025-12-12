#include <stdio.h>

int main() {
    int cases, i, m, n, x, y;

    scanf("%d", &cases);
    while(cases != 0) {
        scanf("%d %d", &n, &m);

        for(i = 0; i < cases; i++) {
            scanf("%d %d", &x, &y);
            if(x == n || y == m) {
                printf("divisa\n");
            }else if(x > n && y > m)
                printf("NE\n");
            else if(x < n && y > m)
                printf("NO\n");
            else if(x < n && y < m)
                printf("SO\n");
            else if(x > n && y < m)
                printf("SE\n");
        }
        
        scanf("%d", &cases);
    }

    return 0;
}
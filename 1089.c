#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, count, proximo, anterior;
    while(scanf("%d", &n)) {
        if(n == 0)
            break;

        int *v = (int *)malloc(n * sizeof(int));
        for(i = 0; i < n;  i++) {
            scanf("%d", &v[i]);
        }

        count = 0;
        for(i = 0; i < n; i++) {
            anterior = v[(i - 1 + n) % n];
            proximo = v[(i + 1) %  n];

            if((v[i] > anterior && v[i] > proximo) || (v[i] < anterior && v[i] < proximo)){
                count++;
            }
        }

        printf("%d\n", count);

        free(v);
    }



    return 0;
}

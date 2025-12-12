#include <stdio.h>

int main() {
    int v[15], par[5] = {0}, impar[5] = {0};
    int num, i, j, k, l;

    l = 0, k = 0;
    for(i = 0; i < 15; i++) {
        scanf("%d", &num);

        if(num % 2 == 0)
            par[l++] = num;
        else
            impar[k++] = num;

        if(l % 5 == 0 && l > 0) {
            for(j = 0; j < 5; j++) {
                printf("par[%d] = %d\n", j, par[j]);
            }
            l = 0;
        }else if(k % 5 == 0 && k > 0) {
            for(j = 0; j < 5; j++) {
                printf("impar[%d] = %d\n", j, impar[j]);
            }

            k = 0;
        }
    }

    for(i = 0; i < k; i++) {
        printf("impar[%d] = %d\n", i, impar[i]);
    }
    for(i = 0; i < l; i++) {
        printf("par[%d] = %d\n", i, par[i]);
    }

    return 0;
}
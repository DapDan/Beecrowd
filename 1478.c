#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j, aux;

    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;

        for(i = 0; i < n; i++) {
            for(j = 0; j < n; j++) {
                aux = abs(i - j) + 1;
                if (j == 0)
                    printf("%3d", aux);      
                else
                    printf(" %3d", aux);     
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
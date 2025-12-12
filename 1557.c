#include <math.h>
#include <stdio.h>

int main() {
    int n, i, j, aux, count, a, width, maior;

    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;
        
        maior = (int) pow(2, 2*(n-1));
        width = 0;
        int temp = maior;
        while(temp > 0) {
            temp /= 10;
            width++;
        }

        count = 0;
        for(i = 0; i < n; i++) {
            a = 0;
            for(j = 0; j < n; j++) {
                aux = (int) pow(2, count);
                if(j == 0)
                    printf("%*d", width, aux);
                else
                    printf(" %*d", width, aux);
                count++;
                a++;
            }
            count = count - (a - 1);
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

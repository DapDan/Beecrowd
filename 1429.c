#include <math.h>
#include <stdio.h>

int main() {
    int acm, cases, aux, i, fatorial, count, res;


    while(1) {
        scanf("%d", &acm);
        if(acm == 0)
            break;

        res = 0, count = 1;
        while(acm > 0) {
            aux = acm % 10;

            fatorial = 1;
            for(i = 1; i <= count; i++) {
                fatorial *= i;
            }

            count++;
            res += (fatorial * aux);
            acm /= 10;
        }

        printf("%d\n", res);
    }

    return 0;
}
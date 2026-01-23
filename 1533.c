#include <stdio.h>

int main(void){
    int n, num, maior, maior2, indice, i;

    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;

        maior = indice = maior2 = 0;
        int v[n];
        for(i = 0; i < n; i++) {
            scanf("%d", &num);
            v[i] = num;
            if(num > maior)
                maior = num;

        }

        for(i = 0; i < n; i++) {
            if(v[i] < maior && v[i] > maior2) {
                maior2 = v[i];
                indice =  i+1;
            }
        }

        printf("%d\n", indice);
    }

    return 0;
}

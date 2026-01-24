#include <math.h>
#include <stdio.h>

int main(void){
    int n, i, j, QT, S, quess, pos, menor;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d %d", &QT, &S);

        pos = 0;
        menor = 1000;
        for(j = 0; j < QT;  j++) {
            scanf("%d", &quess);

            if(abs(S - quess) < menor) {
                menor = abs(S - quess);
                pos = j + 1;
            }
        }

        printf("%d\n", pos);
    }


    return 0;
}
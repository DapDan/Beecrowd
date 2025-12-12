#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5, par, impar, positivo, negativo;
    scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);

    int v[] = {n1, n2, n3, n4, n5};

    par = 0;
    impar = 0;
    positivo = 0;
    negativo = 0;
    for(int i = 0; i < 5; i++) {
        if(v[i] % 2 == 0)
            par++;
        else if(v[i] % 2 != 0)
            impar++;
        if(v[i] > 0)
            positivo++;
        else if(v[i] < 0)
            negativo++;
    }

    printf("%d valor(es) par(es)\n", par);
    printf("%d valor(es) impar(es)\n", impar);
    printf("%d valor(es) positivo(s)\n", positivo);
    printf("%d valor(es) negativo(s)\n", negativo);


    return 0;
}
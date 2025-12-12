#include <stdio.h>

void insertionSort(double *v, int tam) {
    int i, j;
    double chave;

    for(i = 1; i < tam; i++) {
        chave = v[i];
        j = i - 1;

        while(j >= 0 && v[j] <= chave) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}

int main() {
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);
    double v[] = {a, b, c};

    insertionSort(v, 3);
    a = v[0], b = v[1], c = v[2];

    //printf("%lf %lf %lf\n\n", a, b, c);

    if(a >= (b + c)) {
        printf("NAO FORMA TRIANGULO\n");
    }else {
        if((a * a) == (b * b) + (c * c))
            printf("TRIANGULO RETANGULO\n");
        else if((a * a) > (b * b) + (c * c))
            printf("TRIANGULO OBTUSANGULO\n");
        else if((a * a) < (b * b) + (c * c))
            printf("TRIANGULO ACUTANGULO\n");
        if(a == b && b == c)
            printf("TRIANGULO EQUILATERO\n");
        else if (a == b || a == c || b == c)
            printf("TRIANGULO ISOSCELES\n");
    }

    return 0;
}

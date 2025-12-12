#include <stdio.h>

typedef struct fracao {
    int num, den;
}fracao;

fracao adicao(int n1, int n2, int d1, int d2) {
    fracao res;

    res.num = ((n1 * d2) + (n2 * d1));
    res.den = (d1 * d2);

    return res;
}

fracao subtracao(int n1, int n2, int d1, int d2) {
    fracao res;

    res.num = ((n1 * d2) - (n2 * d1));
    res.den = (d1 * d2);

    return res;
}

fracao multiplicacao(int n1, int n2, int d1, int d2) {
    fracao res;

    res.num = n1 * n2;
    res.den = d1 * d2;

    return res;
}

fracao divisao(int n1, int n2, int d1, int d2) {
    fracao res;

    res.num = n1 * d2;
    res.den = n2 * d1;

    return res;
}

fracao mdc(fracao res) {
    if(res.num > res.den) {
        for(int i = res.num / 2; i > 0; i--) {
            if(res.num % i == 0 && res.den % i ==0) {
                printf("%d/%d\n", res.num/i, res.den/i);
                break;
            }
        }
    }else if(res.num < res.den) {
        for(int i = res.den / 2; i > 0; i--) {
            if(res.num % i == 0 && res.den % i ==0) {
                printf("%d/%d\n", res.num/i, res.den/i);
                break;
            }
        }
    }else
        printf("1/1\n");

    return res;
}

int main() {
    int i, cases;
    int n1, n2, d1, d2;
    char sinal;
    fracao res;

    scanf("%d", &cases);

    sinal = "";
    res.num = 0, res.den = 0;
    for(i = 0; i < cases; i++) {
        scanf("%d / %d %c %d / %d", &n1, &d1, &sinal, &n2, &d2);

        switch (sinal) {
            case '+':
                res = adicao(n1, n2, d1, d2);
                break;
            case '-':
                res = subtracao(n1, n2, d1, d2);
                break;
            case '*':
                res = multiplicacao(n1, n2, d1, d2);
                break;
            case '/':
                res = divisao(n1, n2, d1, d2);
                break;
        }

        printf("%d/%d = ", res.num, res.den);
        mdc(res);
    }

    return 0;
}
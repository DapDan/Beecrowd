#include <stdio.h>

int main() {
    float salario, reajuste, percentual;
    scanf("%f", &salario);

    reajuste = 0;
    percentual = 0;
    if(salario >= 0 && salario <= 400) {
        percentual = 0.15;
        reajuste = salario * percentual;
    }else if(salario >= 400.01 && salario <= 800) {
        percentual = 0.12;
        reajuste = salario * percentual;
    }else if(salario >= 800.01 && salario <= 1200) {
        percentual = 0.10;
        reajuste = salario * percentual;
    }else if(salario >= 1200.01 && salario <= 2000) {
        percentual = 0.07;
        reajuste = salario * percentual;
    }else if(salario > 2000){
        percentual = 0.04;
        reajuste = salario * 0.04;
    }

    salario = salario + reajuste;
    percentual *= 100;

    printf("Novo salario: %.2f\n", salario);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", percentual);

    return 0;
}

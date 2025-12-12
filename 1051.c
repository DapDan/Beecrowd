#include <stdio.h>

int main() {
    float salario, taxa;
    scanf("%f", &salario);

    taxa = 0;
    if(salario >= 0 && salario <= 2000) {
        printf("Isento\n");
    }else if(salario >= 2000.01 && salario <= 3000) {
        taxa = (salario - 2000) * 0.08;
        printf("R$ %.2f\n", taxa);
    }else if(salario >= 3000.01 && salario <= 4500) {
        taxa =  ((salario - 3000) * 0.18) + 1000.00 * 0.08;
        printf("R$ %.2f\n", taxa);
    }else if(salario > 4500) {
        taxa = ((salario - 4500) * 0.28) + 1500.00 * 0.18 + 1000.00 * 0.08;
        printf("R$ %.2f\n", taxa);
    }



    return 0;
}

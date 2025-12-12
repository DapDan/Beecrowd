#include <stdio.h>

int main() {
    int cod, qtd;
    float preco;
    scanf("%d %d", &cod, &qtd);

    if(cod == 1)
        preco = 4.00;
    else if(cod == 2)
        preco = 4.50;
    else if(cod == 3)
        preco = 5;
    else if(cod == 4)
        preco = 2;
    else
        preco = 1.50;

    preco = preco * qtd;
    printf("Total: R$ %.2f\n", preco);

    return 0;
}
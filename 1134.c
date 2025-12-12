#include <stdio.h>

int main() {
    int tipo, alcool, gasolina, diesel;
    scanf("%d", &tipo);

    alcool = 0, gasolina = 0, diesel = 0;
    while(1){
        scanf("%d", &tipo);

        if(tipo == 1)
            alcool++;
        else if(tipo == 2)
            gasolina++;
        else if(tipo == 3)
            diesel++;
        else if(tipo == 4)
            break;
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcool);
    printf("Gasolina: %d\n", gasolina);
    printf("Diesel: %d\n", diesel);

    return 0;
}
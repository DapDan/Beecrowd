#include <stdio.h>

int main() {
    float m[12][12];
    int l, i, j;
    float soma, average;
    float num;
    char opcao;

    soma = 0;
    average = 0;

    scanf("%d", &l);
    scanf(" %c", &opcao);

    switch (opcao) {
        case 'S':
            for(i = 0; i < 12; i++) {
                for(j = 0; j < 12; j++) {
                    scanf("%f", &m[i][j]);

                    if(i == l)
                        soma += m[i][j];
                }
            }
        break;

        case 'M':
            for(i = 0; i < 12; i++) {
                for(j = 0; j < 12; j++) {
                    scanf("%f", &m[i][j]);

                    if(i == l)
                        average += m[i][j];
                }
            }

            average /= 12;
        break;

        default:
            printf("");
    }

    if(opcao == 'S')
        printf("%.1f\n", soma);
    else
        printf("%.1f\n", average);

    return 0;
}
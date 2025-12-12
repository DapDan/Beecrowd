#include <stdio.h>

int main() {
    double m[12][12];
    char operacao;
    double sum, average, count;

    scanf(" %c", &operacao);

    if(operacao == 'S') {
        sum = 0;
        for(int i = 0; i < 12; i++) {
            for(int j = 0; j < 12; j++) {
                scanf("%lf", &m[i][j]);

                if(i < j &&  i + j > 11)
                    sum += m[i][j];
            }
        }

        printf("%.1lf\n", sum);
    }else if(operacao == 'M') {
        average = 0, count = 0;
        for(int i = 0; i < 12; i++) {
            for(int j = 0; j < 12; j++) {
                scanf("%lf", &m[i][j]);

                if(i < j && i + j > 11) {
                    average += m[i][j];
                    count++;
                }
            }
        }

        printf("%.1lf\n", average/count);
    }

    return 0;
}
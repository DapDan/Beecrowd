#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double func() {
    int i, j, count;
    double value, s;

    s = 0.0;
    count = 0;
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%lf", &value);
            if((j < 5) && (i + j < 11 && i > j)) {
                s += value;
                count++;
            }
        }
    }

    return s;
}

int main() {
    char *carac;
    double sum, avg;

    carac = (char *)malloc(1 * sizeof(char));
    scanf("%s", carac);

    if(strcmp(carac, "S") == 0) {
        sum = func();
        printf("%.1lf\n", sum);
    }else if(strcmp(carac, "M") == 0) {
        sum = func();
        avg = sum / 30.0;
        printf("%.1lf\n", avg);
    }

    return 0;
}

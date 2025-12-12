#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int func() {
    int i, j;
    float value, s;

    s = 0;
    for(i = 0; i < 12; i++) {
        for(j = 0; j < 12; j++) {
            scanf("%f", &value);
            if(i + j < 11) {
                s += value;
            }
        }
    }

    return s;
}

int main() {
    char *carac;
    float sum, avg;

    carac = (char *)malloc(1 * sizeof(char));
    scanf("%s", carac);

    if(strcmp(carac, "S") == 0) {
        sum = func();
        printf("%f\n", sum);
    }else if(strcmp(carac, "M") == 0) {
        sum = func();
        avg = sum / 66;
        printf("%.1f\n", avg);
    }

    return 0;
}

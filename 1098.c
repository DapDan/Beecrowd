#include <stdio.h>
#include <math.h>

int main() {
    float a, i, j;

    i = 0, j = 1;
    for(a = 0; a <= 2.1; a+=0.2) {
        if(fabs(a - (int)i) < 0.00001) {
            printf("I=%d J=%d\n", (int)i, (int)j);
            printf("I=%d J=%d\n", (int)i, (int)j+1);
            printf("I=%d J=%d\n", (int)i, (int)j+2);
        }else {
            printf("I=%.1f J=%.1f\n", i, j);
            printf("I=%.1f J=%.1f\n", i, j+1);
            printf("I=%.1f J=%.1f\n", i, j+2);
        }

        i+=0.2;
        j+=0.2;
    }

    return 0;
}
#include <stdio.h>

int main() {
    int i;
    float num;

    for(i = 0; i < 100; i++) {
        scanf("%f", &num);

        if(num <= 10)
            printf("A[%d] = %.1f\n", i, num);
    }

    return 0;
}
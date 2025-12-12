#include <stdio.h>

int main() {
    float n1, n2, n3, n4, n5, n6;
    int total;
    scanf("%f %f %f %f %f %f", &n1, &n2, &n3, &n4, &n5, &n6);

    float v[] = {n1, n2, n3, n4, n5, n6};
    total = 0;

    for(int i = 0; i < 6; i++) {
        if(v[i] > 0)
            total++;
    }

    printf("%d valores positivos\n", total);

    return 0;
}
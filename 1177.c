#include <stdio.h>

int main() {
    int n[1000];
    int num, j;
    scanf("%d", &num);

    j = 0;
    for(int i = 0; i < 1000; i++) {
        printf("N[%d] = %d\n", i, j);
        j++;

        if(j == num)
            j = 0;
    }


    return 0;
}
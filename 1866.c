#include <stdio.h>

int main() {
    int i, N, num;

    scanf("%d", &N);
    for(i = 0; i < N;  i++) {
        scanf("%d", &num);
        if(num % 2 == 0)
            printf("0\n");
        else
            printf("1\n");
    }

    return 0;
}

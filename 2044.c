#include <stdio.h>

int main() {
    int N, i, sum, num, count;

    count = 0;
    while(scanf("%d", &N)) {
        if(N == -1)
            break;

        sum = count = 0;

        for(i = 0; i < N; i++) {
            scanf("%d", &num);
            sum += num;

            if(sum % 100 == 0) {
                sum = 0;
                count++;
            }
        }

        printf("%d\n", count);
    }

    return 0;
}

#include <stdio.h>

int fibonacci(int num, int *count, int *calls) {
    (*count)++;

    if(num == 0) {
        return 0;
    }else if(num == 1) {
        (*calls)++;
        return 1;
    }else {
        return fibonacci(num - 1, count, calls) + fibonacci(num - 2, count, calls);
    }
}

int main() {
    int cases, num, i;
    int count, calls;

    scanf("%d", &cases);

    for(i = 0; i < cases; i++) {
        count = -1;
        calls = 0;
        scanf("%d", &num);
        fibonacci(num, &count, &calls);
        printf("fib(%d) = %d calls = %d\n", num, count, calls);
    }

    return 0;
}
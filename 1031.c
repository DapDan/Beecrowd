#include <stdio.h>

int josephus(int N, int k) {
    if(N == 1)
        return 1;
    return(josephus(N - 1, k) + k - 1) % N + 1;
}

int main() {
    int N;
    while (scanf("%d", &N), N != 0) {
        int k = 1;
        while (josephus(N - 1, k) != 12) { // 12 porque queremos que o 13º poste sobreviva
            k++;
        }
        printf("%d\n", k);
    }
    return 0;
}

#include <stdio.h>

int josephus(int N, int k) {
    if(N == 1)
        return 1;
    return(josephus(N - 1, k) + k - 1) % N + 1;
}


int main(){
    int i, tam, step, cases, result;
    scanf("%d", &cases);

    for(i = 0; i < cases; i++) {
        scanf("%d %d", &tam, &step);
        result = josephus(tam, step);
        printf("Case %d: %d\n", i + 1, result);
    }

    return 0;
}
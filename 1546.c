#include <stdio.h>

int main() {
    int N, K, i, feedback;

    scanf("%d", &N);

    for(i = 0; i < N; i++) {
        scanf("%d", &K);
        for(int j = 0; j < K; j++) {
            scanf("%d", &feedback);
            if(feedback == 1)
                printf("Rolien\n");
            else if(feedback == 2)
                printf("Naej\n");
            else if(feedback == 3)
                printf("Elehcim\n");
            else
                printf("Odranoel\n");
        }
    }

    return 0;
}

#include <stdio.h>

int main() {
    int N, LA, LB, SA, SB;
    int flag = 1;

    scanf("%d", &N);
    scanf("%d %d", &LA, &LB);
    scanf("%d %d", &SA, &SB);

    if(N >= LA && N <= LB && SA <= N && N <= SB){
        flag = 0;
    }

    if(flag == 0) {
        printf("possivel\n");
    }else {
        printf("impossivel\n");
    }

    return 0;
}
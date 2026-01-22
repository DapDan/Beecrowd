#include <stdio.h>

int main(void){
    int A, B, C;

    while(scanf("%d %d %d", &A, &B, &C) != EOF) {
        if(A == B && A == C)
            printf("*\n");
        else if(A == B && A != C)
            printf("C\n");
        else if(A == C && A != B)
            printf("B\n");
        else if(B == C && B != A)
            printf("A\n");
    }

    return 0;
}

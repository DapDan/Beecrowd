#include <stdio.h>

int mdc(int f1, int f2) {
    if(f1 % f2 == 0)
        return f2;
    else
        return (mdc(f2, (f1 % f2)));
}

int main() {
    int cases, f1, f2, i;

    scanf("%d", &cases);

    for(i = 0; i < cases; i++) {
        scanf("%d %d", &f1, &f2);
        printf("%d\n", mdc(f1, f2));
    }

    return 0;
}
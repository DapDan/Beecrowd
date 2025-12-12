#include <stdio.h>

int main() {
    int t1, t2, t3, t4, sum;

    scanf("%d %d %d %d", &t1, &t2, &t3, &t4);
    sum = 0;
    if(t1 >= t2 && t1 >= t3 && t1 >= t4) {
        sum = t1 + (t2 - 1) + (t3 - 1) + (t4 - 1);
    }else if(t2 >= t1 && t2 >= t3 && t2 >= t4) {
        sum = t2 + (t1 - 1) + (t3 - 1) + (t4 - 1);
    }else if(t3 >= t1 && t3 >= t2 && t3 >= t4) {
        sum = t3 + (t1 - 1) + (t2 - 1) + (t4 - 1);
    }else {
        sum = t4 + (t1 - 1) + (t2 - 1) + (t3 - 1);
    }

    printf("%d\n", sum);

    return 0;
}

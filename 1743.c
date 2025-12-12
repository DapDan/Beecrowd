#include <stdio.h>

int main() {
    int x[5], y[5];
    int i, flag;

    for(i = 0; i < 5; i++) {
        scanf("%d", &x[i]);
    }
    for(i = 0; i < 5; i++) {
        scanf("%d", &y[i]);
    }

    flag = 1;
    for(i = 0; i < 5; i++) {
        if((x[i] == 1 && y[i] == 1) || (x[i] == 0 && y[i] == 0)) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Y\n");
    else
        printf("N\n");

    return 0;
}

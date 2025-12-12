#include <stdio.h>

int main() {
    int n;

    while(scanf("%d", &n) != EOF) {
        for(int i = 1; i <= n; i += 2) {
            int spaces = (n - i) / 2;
            for(int j = 0; j < spaces; j++)
                printf(" ");
            for(int j = 0; j < i; j++)
                printf("*");
            printf("\n");
        }

        int trunk_widths[2] = {1, 3};
        for(int k = 0; k < 2; k++) {
            int spaces = (n - trunk_widths[k]) / 2;
            for(int j = 0; j < spaces; j++)
                printf(" ");
            for(int j = 0; j < trunk_widths[k]; j++)
                printf("*");
            printf("\n");
        }

        printf("\n");
    }

    return 0;
}

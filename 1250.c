#include <stdio.h>

int main() {
    int n, s;

    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &s);

        int vet[s];
        for(int j = 0; j < s; j++) {
            scanf("%d", &vet[j]);
        }

        char input[s + 1];
        scanf("%s", input);

        int hit = 0;
        for(int j = 0; j < s; j++) {
            if(input[j] == 'J' && vet[j] > 2)
                hit++;
            else if(input[j] == 'S' && vet[j] <= 2)
                hit++;
        }

        printf("%d\n", hit);
    }

    return 0;
}

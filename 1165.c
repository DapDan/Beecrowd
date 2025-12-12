#include <stdio.h>

int main() {
    int cases, num, i, count;

    scanf("%d", &cases);

    for(int j = 0; j < cases; j++) {
        scanf("%d", &num);

        count = 0;
        for(i = 1; i <= num; i++) {
            if(num % i == 0)
                count++;
        }

        if(count > 2)
            printf("%d nao eh primo\n", num);
        else
            printf("%d eh primo\n", num);
    }
    
    return 0;
}
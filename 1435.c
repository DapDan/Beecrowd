#include <stdio.h>

int main() {
    int i, j, num;

    while(1) {
        scanf("%d", &num);
        if(num == 0)
            break;

        for(i = 0; i < num; i++) {
            for(j = 0; j < num; j++) {
                int x = i < num - i ? i : num - i - 1;
                int y = j < num - j ? j : num - j - 1;
                int val = (x < y ? x : y) + 1;

                if (j == 0)
                    printf("%3d", val); // primeira coluna sem espaço à esquerda
                else
                    printf(" %3d", val); // demais colunas com espaço


            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}

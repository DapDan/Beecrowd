#include <stdio.h>

int main(void){
    int v[] = {1, 2, 3, 4};
    int n, i, indice;
    char commands[1005];

    while(1) {
        scanf("%d", &n);
        if(n == 0)
            break;

        scanf("%s", commands);

        indice = 0;
        for(i = 0; i < n; i++) {
            if(commands[i] == 'D')
                indice = (indice + 1) % 4;

            else if(commands[i] == 'E')
                indice = (indice - 1 + 4) % 4;
        }

        if(v[indice] == 1)
            printf("N\n");
        else if(v[indice] == 2)
            printf("L\n");
        else if(v[indice] == 3)
            printf("S\n");
        else
            printf("O\n");
    }

    return 0;
}

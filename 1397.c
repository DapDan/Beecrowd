#include <stdio.h>

int main() {
    int rounds, player1, player2, score1, score2;

    scanf("%d", &rounds);
    while(rounds != 0) {
        score1 = 0;
        score2 = 0;
        for(int i = 0; i < rounds; i++) {
            scanf("%d %d", &player1, &player2);
            if(player1 > player2)
                score1++;
            else if(player2 > player1)
                score2++;
        }

        printf("%d %d\n", score1, score2);

        scanf("%d", &rounds);
    }

    return 0;
}
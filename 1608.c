#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        long long D;
        int I, B;
        scanf("%lld %d %d", &D, &I, &B);

        long long preco[105];
        for (int i = 0; i < I; i++) {
            scanf("%lld", &preco[i]);
        }

        long long max_bolos = 0;

        for (int b = 0; b < B; b++) {
            int Q;
            scanf("%d", &Q);

            long long custo = 0;
            for (int j = 0; j < Q; j++) {
                int idx, qtd;
                scanf("%d %d", &idx, &qtd);
                custo += preco[idx] * qtd;
            }

            if (custo > 0) {
                long long qtd_bolos = D / custo;
                if (qtd_bolos > max_bolos)
                    max_bolos = qtd_bolos;
            }
        }

        printf("%lld\n", max_bolos);
    }

    return 0;
}

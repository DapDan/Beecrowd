#include <stdio.h>

int main() {
    int n;

    while (scanf("%d", &n) != EOF) {

        int stack[1005], topo = 0;
        int queue[1005], ini = 0, fim = 0;
        int pqueue[1005], tamPQ = 0;

        int podeStack = 1, podeQueue = 1, podePrio = 1;

        for (int i = 0; i < n; i++) {
            int type, x;
            scanf("%d %d", &type, &x);

            if (type == 1) {
                // Inserção
                stack[topo++] = x;
                queue[fim++] = x;
                pqueue[tamPQ++] = x;

            } else {
                // Stack (LIFO)
                if (topo == 0 || stack[topo - 1] != x)
                    podeStack = 0;
                else
                    topo--;

                // Queue (FIFO)
                if (ini == fim || queue[ini] != x)
                    podeQueue = 0;
                else
                    ini++;

                // Priority Queue (maior primeiro)
                if (tamPQ == 0)
                    podePrio = 0;
                else {
                    int maior = pqueue[0], idx = 0;
                    for (int j = 1; j < tamPQ; j++) {
                        if (pqueue[j] > maior) {
                            maior = pqueue[j];
                            idx = j;
                        }
                    }

                    if (maior != x)
                        podePrio = 0;
                    else {
                        pqueue[idx] = pqueue[tamPQ - 1];
                        tamPQ--;
                    }
                }
            }
        }

        int qtd = podeStack + podeQueue + podePrio;

        if (qtd == 0)
            printf("impossible\n");
        else if (qtd > 1)
            printf("not sure\n");
        else if (podeStack)
            printf("stack\n");
        else if (podeQueue)
            printf("queue\n");
        else
            printf("priority queue\n");
    }

    return 0;
}

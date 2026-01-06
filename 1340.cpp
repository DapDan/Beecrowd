#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    while(cin >> n) {
        vector<int> stack(1005);
        vector<int> queue(1005);
        vector<int> queueP(1005);

        int topo, ini, fim, tamPQ, x, i, j, type;
        int podeStack = 1, podeQueue = 1, podePrio = 1;
        topo = ini = fim = tamPQ = 0;

        for(i = 0; i < n; i++) {
            cin >> type >> x;

            if(type == 1) {
                stack[topo++] = x;
                queue[fim++] = x;
                queueP[tamPQ++] = x;
            }else {
                if(topo == 0 || stack[topo - 1] != x)
                    podeStack = 0;
                else
                    topo--;

                if(ini == fim || queue[ini] != x)
                    podeQueue = 0;
                else
                    ini++;

                if(tamPQ == 0)
                    podePrio = 0;
                else {
                    int maior = queueP[0], aux = 0;
                    for(j = 0; j < tamPQ; j++) {
                        if(queueP[j] > maior) {
                            maior = queueP[j];
                            aux = j;
                        }
                    }

                    if(maior != x)
                        podePrio = 0;
                    else {
                        queueP[aux] = queueP[tamPQ - 1];
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

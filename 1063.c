#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    char dado;
    struct no *prox;
} tno;

typedef struct pilha {
    tno *topo;
} tpilha;

void iniciaPilha(tpilha *p) {
    p->topo = NULL;
}

int empilha(tpilha *p, char dado) {
    tno *novo = (tno *)malloc(sizeof(tno));
    if(!novo) return 0;

    novo->dado = dado;
    novo->prox = p->topo;
    p->topo = novo;
    return 1;
}

int desempilha(tpilha *p) {
    if(p->topo == NULL) return 0;

    tno *aux = p->topo;
    p->topo = aux->prox;
    free(aux);
    return 1;
}

void desaloca(tpilha *p) {
    while(p->topo)
        desempilha(p);
}

int main() {
    tpilha *p = (tpilha *)malloc(sizeof(tpilha));
    if(!p) {
        printf("\nNao foi possivel inicialzar a pilha!");
        return 1;
    }

    int n, i, j, k, flag;

    while(scanf("%d", &n) && n != 0) {

        iniciaPilha(p);

        char entrada[n], saida[n];
        char output[100];

        for(i = 0; i < n; i++)
            scanf(" %c", &entrada[i]);

        for(i = 0; i < n; i++)
            scanf(" %c", &saida[i]);

        i = 0; j = 0; k = 0; flag = 0;

        while(i <= n - 1) {
            empilha(p, entrada[i]);
            output[k++] = 'I';
            i++;

            while(p->topo && p->topo->dado == saida[j]) {
                desempilha(p);
                output[k++] = 'R';
                j++;
                flag++;
            }
        }

        output[k] = '\0';

        if(flag == n)
            printf("%s\n", output);
        else
            printf("%s Impossible\n", output);

        desaloca(p);
    }

    free(p);
    return 0;
}

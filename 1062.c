#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int dado;
    struct no *prox;
}tno;

typedef struct pilha {
    tno *topo;
}tpilha;

void iniciaPilha(tpilha *p);
int empilha(tpilha *p, int dado);
int desempilha(tpilha *p);
int pilhaVazia(tpilha *p);
void imprime(tpilha *p);
void desaloca(tpilha *p);

void iniciaPilha(tpilha *p) {
    p->topo = NULL;
}

int empilha(tpilha *p, int dado) {
    tno *novo = (tno *)malloc(sizeof(tno));
    if(!novo)
        return 0;

    novo->dado = dado;
    novo->prox = p->topo;
    p->topo = novo;

    return 1;
}

int desempilha(tpilha *p) {
    tno *aux;

    if(pilhaVazia(p)) {
        printf("\nPilha vazia!");
        return 0;
    }

    aux = p->topo;
    p->topo = p->topo->prox;
    free(aux);

    return 1;
}

int pilhaVazia(tpilha *p) {
    if(p->topo == NULL)
        return 1;
    return 0;
}

void imprime(tpilha *p) {
    tno *aux = p->topo;

    puts("");
    while(aux) {
        if(aux->prox)
            printf("%d -> ", aux->dado);
        else
            printf("%d.", aux->dado);

        aux = aux->prox;
    }
}

void desaloca(tpilha *p) {
    tno *aux;
    while(p->topo) {
        aux = p->topo;
        p->topo = p->topo->prox;
        free(aux);
    }
}

int main() {
    tpilha *p = (tpilha *)malloc(sizeof(tpilha));
    if(!p) {
        printf("\nNao foi possivel inicialzar a pilha!");
        return 1;
    }

    int n, i, j, flag;

    while (scanf("%d", &n) && n != 0) {

        while (1) {
            iniciaPilha(p);

            int entrada[n];
            int saida[n];

            scanf("%d", &entrada[0]);
            if (entrada[0] == 0)
                break;

            for (i = 1; i < n; i++)
                scanf("%d", &entrada[i]);

            for (i = 0; i < n; i++)
                saida[i] = i + 1;

            i = j = n - 1;
            flag = 0;

            while (1) {
                if ((i >= 0 && j >= 0) && entrada[i] == saida[j]) {
                    i--; j--; flag++;
                }
                else if (p->topo != NULL && p->topo->dado == saida[j] && j >= 0) {
                    desempilha(p);
                    j--; flag++;
                }
                else if ((i >= 0 && j >= 0) && entrada[i] != saida[j]) {
                    empilha(p, entrada[i]);
                    i--;
                }
                else {
                    break;
                }
            }

            if (flag == n)
                printf("Yes\n");
            else
                printf("No\n");

            desaloca(p);
        }

        printf("\n");
    }

    free(p);
    return 0;
}

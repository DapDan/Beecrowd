#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

typedef struct no
{
    char dado;
    struct no *prox;
} tno;

typedef struct pilha
{
    tno *topo;
} tpilha;

/* Protótipos */
void iniciapilha(tpilha *p);
int pilhavazia(tpilha p);
char empilha(tpilha *p, char dado);
char topo(tpilha *p);
char desempilha(tpilha *p);
void desaloca(tpilha *p);
int precedencia(char c);
void posfixa(char *expre);

/* Implementações */

void iniciapilha(tpilha *p)
{
    p->topo = NULL;
}

int pilhavazia(tpilha p)
{
    return (p.topo == NULL);
}

char empilha(tpilha *p, char dado)
{
    tno *no = (tno *)malloc(sizeof(tno));
    if (!no)
        return 0;

    no->dado = dado;
    no->prox = p->topo;
    p->topo = no;
    return 1;
}

char topo(tpilha *p)
{
    if (p->topo)
        return p->topo->dado;
    return '\0';
}

char desempilha(tpilha *p)
{
    if (!p->topo)
        return '\0';

    tno *aux = p->topo;
    char c = aux->dado;
    p->topo = aux->prox;
    free(aux);
    return c;
}

void desaloca(tpilha *p)
{
    while (p->topo)
        desempilha(p);
    free(p);
}

int precedencia(char c)
{
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
    if (c == '^')
        return 3;
    return 0;
}

void posfixa(char *expre)
{
    int i;
    tpilha *p = (tpilha *)malloc(sizeof(tpilha));
    iniciapilha(p);

    for (i = 0; expre[i] != '\0'; i++)
    {
        char c = expre[i];

        if (isalnum(c))
        {
            printf("%c", c);
        }
        else if (c == '(')
        {
            empilha(p, c);
        }
        else if (c == ')')
        {
            while (topo(p) != '(')
                printf("%c", desempilha(p));
            desempilha(p); // remove '('
        }
        else  // operador
        {
            while (p->topo &&
                  (precedencia(topo(p)) > precedencia(c) ||
                  (precedencia(topo(p)) == precedencia(c) && c != '^')))
            {
                printf("%c", desempilha(p));
            }
            empilha(p, c);
        }
    }

    while (p->topo)
        printf("%c", desempilha(p));

    desaloca(p);
}

int main(void)
{
    int n, i;
    char expressao[1000];

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%s", expressao);
        posfixa(expressao);
        printf("\n");
    }

    return 0;
}

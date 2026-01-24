#include <stdio.h>
#include <stdlib.h>

void merge(int  *v, int ini, int meio, int fim);
void mergeSort(int *v, int ini, int fim);

void merge(int  *v, int ini, int meio, int fim) {
    int tamVet, i, j, k, l;
    int *aux;

    tamVet = (fim - ini) + 1;
    aux = (int *)malloc(tamVet * sizeof(int));

    j = ini; k = meio + 1; l = 0;
    while(j <= meio && k <= fim) {
        if(v[j] < v[k])
            aux[l++] = v[k++];
        else
            aux[l++] = v[j++];
    }

    while(j <= meio)
        aux[l++] = v[j++];
    while(k <= fim)
        aux[l++] = v[k++];

    for(i = ini; i <= fim; i++) {
        v[i] = aux[i - ini];
    }

    free(aux);
}

void mergeSort(int *v, int ini, int fim) {
    int meio = (ini + fim) / 2;

    if(ini < fim) {
        mergeSort(v, ini, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, ini, meio, fim);
    }
}

void imprime(int *v, int tam) {
    int i;

    for(i = 0; i < tam; i++) {
        printf("%d ", v[i]);
    }
}

int main(void){
    int n, m, i, j, change;

    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &m);

        int original[m];
        int ordenado[m];
        change = 0;
        for(j =  0; j < m; j++) {
            scanf("%d", &original[j]);
            ordenado[j] = original[j];
        }

        mergeSort(ordenado, 0,  m - 1);

        for(j = 0; j < m; j++) {
            if(original[j] == ordenado[j])
                change++;
        }

        printf("%d\n", change);

    }

    return 0;
}

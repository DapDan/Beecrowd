#include <stdio.h>

void insertionSort(int *v, int tam);
void imprime(int *v, int tam);

void insertionSort(int *v, int tam) {
    int i, j, chave;

    for(i = 0; i < tam; i++) {
        chave = v[i];
        j = i - 1;
        while(j >= 0 && v[j] >= chave) {
            v[j + 1] = v[j];
            j--;
        }

        v[j + 1] = chave;
    }
}

void imprime(int *v, int tam) {
    int i;
    for(i = 0; i <= 2; i++) {
        printf("%d\n", v[i]);
    }
}

int main() {
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2,&n3);

    int v[] = {n1, n2, n3};
    int aux[] = {n1, n2, n3};

    insertionSort(v, 3);
    imprime(v, 3);
    printf("\n");
    imprime(aux, 3);

    return 0;
}
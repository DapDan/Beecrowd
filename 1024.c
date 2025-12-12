#include <stdio.h>
#include <string.h>

void deslocaASCII(char *frase);
void reverteFrase(char *frase);
void moveParaEsq(char *frase);

void deslocaASCII(char *frase) {
    int i;
    for (i = 0; frase[i] != '\0'; i++) {
        if ((frase[i] >= 'A' && frase[i] <= 'Z') || (frase[i] >= 'a' && frase[i] <= 'z')) {
            frase[i] += 3;
        }
    }
}

void reverteFrase(char *frase) {
    int i, tam = strlen(frase);
    for (i = 0; i < tam / 2; i++) {
        char temp = frase[i];
        frase[i] = frase[tam - i - 1];
        frase[tam - i - 1] = temp;
    }
}

void moveParaEsq(char *frase) {
    int i, tam = strlen(frase), metade = tam / 2;
    for (i = metade; i < tam; i++) {
        frase[i]--;
    }
}

int main() {
    int N, i;
    char frase[1001];

    scanf("%d", &N);
    getchar(); // Remove a quebra de linha após a leitura de N

    for (i = 0; i < N; i++) {
        fgets(frase, 1001, stdin);
        frase[strcspn(frase, "\n")] = '\0'; // Remove o '\n' da string

        deslocaASCII(frase); // Passo 1: Desloca letras em +3 posições
        reverteFrase(frase); // Passo 2: Inverte a string
        moveParaEsq(frase);  // Passo 3: Move a segunda metade -1 na tabela ASCII

        printf("%s\n", frase);
    }

    return 0;
}

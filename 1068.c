#include <stdio.h>
#include <string.h>

int main() {
    char expressao[10005];

    while (scanf(" %[^\n]", expressao) != EOF) {
        int balance = 0;
        int correct = 1;

        int n = strlen(expressao);
        for (int i = 0; i < n; i++) {
            if (expressao[i] == '(') {
                balance++;
            } else if (expressao[i] == ')') {
                balance--;
                if (balance < 0) {
                    correct = 0;
                    break;
                }
            }
        }

        if (balance != 0)
            correct = 0;

        if (correct)
            printf("correct\n");
        else
            printf("incorrect\n");
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int i, j, n;
    string expressao;

    cin >> n;
    for(i = 0; i < n; i++) {
        int balance = 0;
        int contador = 0;

        cin >> expressao;
        int tamExp = expressao.length();
        for (j = 0; j < tamExp; j++) {
            if (expressao[j] == '<') {
                balance++;
            } else if (balance > 0 && expressao[j] == '>') {
                balance--;
                contador++;
            }
        }
        cout << contador << "\n";
    }

    return 0;
}

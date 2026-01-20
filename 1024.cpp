#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

void desloca3bytes(string &linha) {
    for(char &c : linha) {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            c += 3;
        }
    }
}
void revertefrase(string &linha) {
    reverse(linha.begin(), linha.end());
}

void move1byteesquerda(string &linha) {
    int tam = linha.size();
    int metade = tam / 2;

    int j;
    for(j = metade; j < tam; j++)
        linha[j]--;
}

int main() {
    int i, n;
    string linha;

    cin >> n;
    cin.ignore();

    for(i = 0; i < n; i++) {
        getline(cin, linha);

        desloca3bytes(linha);
        revertefrase(linha);
        move1byteesquerda(linha);

        cout << linha << "\n";
    }


    return 0;
}

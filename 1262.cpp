#include <iostream>
#include <string>
using namespace std;

int main() {
    string trace;
    int procs;

    while (cin >> trace >> procs) {
        int ciclos = 0;
        int i = 0;
        int n = trace.size();

        while (i < n) {
            if (trace[i] == 'W') {
                // Escrita sempre ocupa 1 ciclo
                ciclos++;
                i++;
            } else { 
                // Bloco de leituras
                int qtdR = 0;
                while (i < n && trace[i] == 'R') {
                    qtdR++;
                    i++;
                }
                // Quantos ciclos esse bloco de R consome
                ciclos += (qtdR + procs - 1) / procs;
            }
        }

        cout << ciclos << "\n";
    }

    return 0;
}

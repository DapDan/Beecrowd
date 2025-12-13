#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double valor;
    cin >> valor;

    int centavos = (int)(valor * 100 + 0.5);

    int notas[] = {10000, 5000, 2000, 1000, 500, 200};
    int moedas[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;
    for (int nota : notas) {
        int qtd = centavos / nota;
        centavos %= nota;
        cout << qtd << " nota(s) de R$ "
             << fixed << setprecision(2) << nota / 100.0 << endl;
    }

    cout << "MOEDAS:" << endl;
    for (int moeda : moedas) {
        int qtd = centavos / moeda;
        centavos %= moeda;
        cout << qtd << " moeda(s) de R$ "
             << fixed << setprecision(2) << moeda / 100.0 << endl;
    }

    return 0;
}

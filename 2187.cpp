#include <iostream>
using namespace std;

int main() {
    int V;
    int teste = 1;

    while (cin >> V && V != 0) {
        int I = V / 50; V %= 50;
        int J = V / 10; V %= 10;
        int K = V / 5;  V %= 5;
        int L = V;

        cout << "Teste " << teste++ << "\n";
        cout << I << " " << J << " " << K << " " << L << "\n\n";
    }

    return 0;
}

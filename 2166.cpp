#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    double valor = 0.0;

    for (int i = 0; i < N; i++) {
        valor = 1.0 / (2.0 + valor);
    }

    valor += 1.0;

    cout << fixed << setprecision(10) << valor << endl;
    return 0;
}

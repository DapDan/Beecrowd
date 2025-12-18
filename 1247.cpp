#include <complex>
#include <iostream>
using namespace std;

int main() {
    int d, vf, vg;
    double tempoF, tempoG;

    while (cin >> d >> vf >> vg) {
        tempoF = 12.0 / vf;
        tempoG = sqrt(d * d + 144.0) / vg;

        if (tempoG <= tempoF)
            cout << "S\n";
        else
            cout << "N\n";
    }

    return 0;
}

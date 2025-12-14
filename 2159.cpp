#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double n, P, M;

    cin >> n;

    P = n / log(n);
    M = 1.25506 * (n / log(n));

    cout << fixed << setprecision(1) << P << " " << M << endl;

    return 0;
}

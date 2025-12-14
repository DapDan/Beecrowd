#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int N;
    cin >> N;

    if (N == 0) {
        cout << fixed << setprecision(10) << 3.0 << endl;
        return 0;
    }

    double x = 6.0;
    for (int i = 1; i < N; i++) {
        x = 6.0 + 1.0 / x;
    }

    double ans = 3.0 + 1.0 / x;
    cout << fixed << setprecision(10) << ans << endl;

    return 0;
}
